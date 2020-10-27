//============================================================================
// Name        : FinalWeatherStation.cpp
// Author      : Hooria Mian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*	FORMAT OF PROGRAM:
 * 	- User Selects Language (English or Arabic)
 * 	- User Selects Unit Measurement (Metric or Imperial)
 * 	- User Inputs Office Name - Added as metric or imperial office
 * 	-------------------------------------------------------------------
 * 	- User Inputs Station Name - WeatherOffice adds Station to vector
 * 	- User is Presented Menu - Select an Option with catching errors
 * 		1. Add Station				<- Adds another Weather Station to Weather Office
 * 		2. Add Weather Report		<- User enters temperature, wind speed, wind direction
 * 		3. Select Station			<- Selects Weather Station by name
 * 		4. Print Current Report		<- Prints the most recent report (*cr) - INCLUDING WIND CHILL
 * 		5. Print Summary Report		<- Prints average of all reports - INCLUDING WIND CHILL
 * 		6. Print Daily Report		<- Prints all reports from Weather Station X (Wind Chill)
 * 		7. Quit						<- Quits Program
 *
 * 	If User Adds Report, it is added to a WeatherStation.
 * 	If a User Selects Station, ask for Station Name, and get Station by name.
 * 	Print Summary only prints average temperature, wind speed, and wind chill.
 */

#include <iostream>
#include <string>

#include <sstream>
#include <fstream>
#include <regex>

#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

#include "WeatherOffice.h"
#include "ImperialOffice.h"
#include "MetricOffice.h"

#include "WeatherStation.h"
#include "ImperialStation.h"
#include "MetricStation.h"

#include "WeatherReport.h"
#include "ImperialReport.h"
#include "MetricReport.h"

#include "Message.h"
#include "ArabicMessage.h"
#include "EnglishMessage.h"



using namespace std;

bool valid_input(string, string);


int main() {

	string validate = "[1-2][0]*";
	string language;
	string input;

	int choice = 0;
	int t;
	int ws;
	string wd;
	string validateDir = "[N,n,S,s,E,e,W,e][E,e,W,w]*";
	string isNumeric = "[+-]?[0-9]+";
	string validStationName; // Not Used?

	int history;
	int counter = 0;
	string officeName;

	Message *m;
	WeatherOffice *office;

	do {

		cout << "Please Select a Language : \n1. English \n2. Arabic" << endl;
		cin >> language;

	} while (!valid_input(language, validate));

	if (language == "1")
		m = new EnglishMessage();
	else
		m = new ArabicMessage();

	cout << "----- " << m->getWelcome() << " -----" << endl;	// WELCOME MESSAGE


	string unit;		//GET UNIT
	do {
		cout << m->getUnit() << endl;
		cin >> unit;

	} while(!valid_input(unit, validate));

	if (unit == "1")
		office = new ImperialOffice(); //assign office name
	else
		office = new MetricOffice(); //assign office name


	cout << m->getOfficeName() << " ";		// GET OFFICE NAME
	cin >> officeName;

	cout << m->getStationName() << " ";	// GET STATION NAME
	cin >> input;
	office->addStation(input.c_str());		//ADD STATION TO OFFICE

	cout << m->getHistorySize() << " ";
	cin >> history;
	//office ->getCurrentStation()->setHistory(history);


	string sName;
	//MENU
	cout << "----- " << officeName << m->printOfficeName() << " ------ " << endl;

	do {
		cout << m->printMenu() << endl;
		cin >> choice;

		switch(choice) {

		case 1: // Add Station

			cout << m->getStationName();
			cin >> input;

			office->addStation(input.c_str());

			cout << m->getHistorySize() << " ";
			cin >> history;

			break;

		case 2: // Add Weather Report

			counter = office->getCurrentStation()->getHistory();
			if (counter < history) {

			do {
				cout << m->getTemperature() << " ";
				cin >> t;

				if (t >= 101)
					cout <<	m->printNumHighError() << endl;
				else if (t < -100)
					cout << m->printNumLowError() << endl;

				while (cin.fail())
				{
					cout << m->printNumError() << endl;
					cin.clear();

					while (cin.get() != '\n');
					cin >> t;
				}


			} while (t >= 101 || t < -100);
			/***********************************************************/

			do {
			cout << m->getWindSpeed() << " ";
			cin >> ws;

				if (ws >= 100)
					cout <<	m->printNumHighError() << endl;
				else if (ws < 0)
					cout << m->printNumLowError() << endl;

				while (cin.fail())
				{
					cout << m->printNumError() << endl;
					cin.clear();

					while (cin.get() != '\n');
					cin >> ws;;
				}

			} while (ws >= 100 || ws < 0); //|| cin.fail()
			/***********************************************************/

			do {
			cout << m->getWindDirection() << " ";
			cin >> wd;
				if (!valid_input(wd, validateDir))
						cout << m->printWindDirError() << endl;

			} while (!valid_input(wd, validateDir));

			office->getCurrentStation()->addReport(t, ws, wd);

			cout << "Added" << endl; //****** TEST ******

			}

			else {
				cout << m->printHistoryError() << endl;
			}

			break;

		case 3: // Select Station

			cout << m->getStationName();
			cin >> input;

			office->selectStation(input.c_str());

			sName = office->getCurrentStation()->getStationName();

			cout << "----- " << sName << endl;

			break;

		case 4: // Print Current Report

			cout << m->printCurrentReport() << endl;
			office->getCurrentStation()->getCurrentReport()->printWeather();

			break;

		case 5: // Print Stations

			office->printStations();

			break;

		case 6: // Print Summary Report

			cout << m->printSummaryM() << endl;

			cout << m->printSummary();
			office->getCurrentStation()->printTempSummary();
			cout << m->printWindSpeedSummary();
			office->getCurrentStation()->printWindSummary();

			break;

		case 7: // Print Daily Report

			office->getCurrentStation()->printReports();

			break;

		case 8: // Quit

			cout << m->printGoodbye();

			break;

		default:

			cout << m->printSelectionChoiceError() << endl;

		}

	} while (choice != 8);


}

bool valid_input(string input, string validation)
{
	const char* test = input.c_str();
	regex re(validation);
	cmatch match;
	if (regex_match(test, match, re))
	{
		return true;

	}
	else
	{
		return false;
	}
}

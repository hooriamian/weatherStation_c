/*
 * ImperialStation.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */

#include "ImperialStation.h"
#include "ImperialReport.h"
#include <vector>
#include <string>
#include <iostream>
#include <ostream>
#include <algorithm>

using namespace std;

ImperialStation::ImperialStation() {}

ImperialStation::ImperialStation(const char *n){
	name = n;
}

void ImperialStation::addReport(int t, int ws, string wd) {
	ImperialReport *r = new ImperialReport(t, ws, wd);
	weatherReports.push_back(r);
	cw = r;
}

void ImperialStation::printReports() {
	cout << "----- " << name << " Imperial Weather Station -----" << endl;

	for (int i = 0; i < weatherReports.size(); i++)
	    {
        	weatherReports[i]->printWeather();
	    }

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}
}

void ImperialStation::printTempSummary() {

	int sum = 0;
	int high;
	int low;
	int avg;

	for (int i = 0; i < weatherReports.size(); i++)
	{
		sum = sum + weatherReports[i]->getTemperature();
	}

	avg = sum / weatherReports.size();

	for (int j = 0; j < weatherReports.size(); j++) {
		if (high < weatherReports[j]->getTemperature()){
			high = weatherReports[j]->getTemperature();
		}

		if (low > weatherReports[j]->getTemperature()) {
			low = weatherReports[j]->getTemperature();
		}

	}

	cout << avg << " F" << " | High: " << high << " F" << " | Low: " << low << " F. ";

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}

}

void ImperialStation::printWindSummary() {

	int sum = 0;
	int avg;

	for (int i = 0; i < weatherReports.size(); i++)
	{
		sum = sum + weatherReports[i]->getWindSpeed();
	}

	avg = sum / weatherReports.size();

	cout << avg << " MPH" << endl;

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}

}

void ImperialStation::setHistory(int h) {

	weatherReports.resize(h);

}

int ImperialStation::getHistory() {

	return this->weatherReports.size();
}


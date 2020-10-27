/*
 * WeatherStation.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef WEATHERSTATION_H_
#define WEATHERSTATION_H_

#include <vector>
#include <string>
#include "WeatherReport.h"
#include <iostream>

using namespace std;


class WeatherStation {
protected:
	string name;
	vector<WeatherReport*> weatherReports;
	WeatherReport *cw;
public:
	WeatherStation();
	string getStationName();
	virtual void addReport(int, int, string) = 0;
	virtual void printReports() = 0;
	WeatherReport *getCurrentReport(){
		return cw;
	}
	virtual void printTempSummary() = 0;
	virtual void printWindSummary() = 0;

	virtual void setHistory(int) = 0;
	virtual int getHistory() = 0;
};



#endif /* WEATHERSTATION_H_ */

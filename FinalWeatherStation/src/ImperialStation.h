/*
 * ImperialStation.h
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */

#ifndef IMPERIALSTATION_H_
#define IMPERIALSTATION_H_

#include "WeatherStation.h"

class ImperialStation : public WeatherStation {

public:
	ImperialStation();
	ImperialStation(const char *);
	void addReport(int, int, string);
	void printReports();
	void printTempSummary();
	void printWindSummary();

	void setHistory(int);
	int getHistory();
};


#endif /* IMPERIALSTATION_H_ */

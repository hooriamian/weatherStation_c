/*
 * MetricStation.h
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */

#ifndef METRICSTATION_H_
#define METRICSTATION_H_

#include "WeatherStation.h"

class MetricStation : public WeatherStation {

public:
	MetricStation();
	MetricStation(const char *);
	void addReport(int, int, string);
	void printReports();
	void printTempSummary();
	void printWindSummary();

	void setHistory(int);
	int getHistory();
};



#endif /* METRICSTATION_H_ */

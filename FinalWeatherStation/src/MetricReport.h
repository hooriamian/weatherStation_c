/*
 * MetricReport.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef METRICREPORT_H_
#define METRICREPORT_H_

#include "WeatherReport.h"

class MetricReport : public WeatherReport {

public:
	MetricReport();
	MetricReport(int, int, string);
	virtual int getWindChill();
	virtual void printWeather();
};



#endif /* METRICREPORT_H_ */

/*
 * MetricOffice.h
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */

#ifndef METRICOFFICE_H_
#define METRICOFFICE_H_

#include "WeatherOffice.h"

class MetricOffice : public WeatherOffice {

public:
	MetricOffice();
	MetricOffice(const char *);
	void addStation(const char *);
	//void getStation(WeatherStation*);
	void selectStation(const char *);
};

#endif /* METRICOFFICE_H_ */

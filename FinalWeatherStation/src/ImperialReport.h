/*
 * ImperialReport.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef IMPERIALREPORT_H_
#define IMPERIALREPORT_H_

#include "WeatherReport.h"

class ImperialReport : public WeatherReport {

public:
	ImperialReport();
	ImperialReport(int, int, string);
	virtual int getWindChill();
	virtual void printWeather();
};



#endif /* IMPERIALREPORT_H_ */

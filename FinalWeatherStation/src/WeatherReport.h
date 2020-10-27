/*
 * WeatherReport.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef WEATHERREPORT_H_
#define WEATHERREPORT_H_
#include <string>

using namespace std;

class WeatherReport {
protected:
	int temperature;
	int windSpeed;
	string windDirection;
public:

	WeatherReport();
	WeatherReport(int, int, string);

	int getTemperature();
	int getWindSpeed();
	string getWindDirection();

	virtual int getWindChill() = 0;
	virtual void printWeather() = 0;

	void setTemperature(int);
	void setWindSpeed(int);
	void setWindDirection(string);

};


#endif /* WEATHERREPORT_H_ */

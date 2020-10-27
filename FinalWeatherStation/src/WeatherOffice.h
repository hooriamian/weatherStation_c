/*
 * WeatherOffice.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef WEATHEROFFICE_H_
#define WEATHEROFFICE_H_

#include <string>
#include "WeatherStation.h"
#include <vector>

using namespace std;

class WeatherOffice {
protected:
	string name;
	vector<WeatherStation*> stations;
	WeatherStation *cs; //current station
	WeatherStation *ss;

public:

	WeatherOffice();
	WeatherOffice(const char*);
	void addStation(WeatherStation*);
	void virtual addStation(const char*) = 0;
	void printStations();
	WeatherStation *getCurrentStation() {
		return cs;
	}
	void virtual selectStation(const char*) = 0;
	void selectStation(WeatherStation*);
};



#endif /* WEATHEROFFICE_H_ */

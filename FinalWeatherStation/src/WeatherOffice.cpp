/*
 * WeatherOffice.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include <iostream>
#include "WeatherStation.h"
#include "WeatherOffice.h"

WeatherOffice::WeatherOffice() {

}

WeatherOffice::WeatherOffice(const char *n) {
	name = n;
}

void WeatherOffice::addStation(WeatherStation *sp) {
	stations.push_back(sp);
	cs = sp;
}

void WeatherOffice::printStations() {
	for (int n = 0; n < stations.size(); ++n) {
		cout << " | "<< stations[n]->getStationName() << endl;
	}

}

void WeatherOffice::selectStation(WeatherStation *ssp) { //SelectStationPointer
	cs = ssp;
}

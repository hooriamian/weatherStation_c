/*
 * MetricOffice.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: Hooria Mian
 */

#include "MetricOffice.h"
#include "MetricStation.h"


MetricOffice::MetricOffice() {}

MetricOffice::MetricOffice(const char *name):WeatherOffice(name) {
	this->name = name;
}

void MetricOffice::addStation(const char *name) {
	MetricStation *n = new MetricStation(name);
	WeatherOffice::addStation(n);
}

void MetricOffice::selectStation(const char *name) {

	string sname;
	MetricStation *ss;

	for (int i = 0; i < stations.size(); ++i) {
		sname = stations[i]->getStationName();

		if (sname == name) {
			cout << "Found it!" << endl;
			ss =  new MetricStation(name);
			WeatherOffice::selectStation(ss);
		}
	}

}

/*
 * ImperialOffice.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: Hooria Mian
 */

#include "ImperialOffice.h"
#include "ImperialStation.h"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

ImperialOffice::ImperialOffice() {}

ImperialOffice::ImperialOffice(const char *name):WeatherOffice(name) {
	this->name = name;
}

void ImperialOffice::addStation(const char *name) {
	ImperialStation *n = new ImperialStation(name);
	WeatherOffice::addStation(n);

}

void ImperialOffice::selectStation(const char *name) {

	string sname;
	ImperialStation *ss;

	for (int i = 0; i < stations.size(); ++i) {
		sname = stations[i]->getStationName();

		if (sname == name) {
			cout << "Found it!" << endl;
			ss =  new ImperialStation(name);
			//ImperialStation(name);

			//ImperialStation station[i];
			////ss = &station[i];
			WeatherOffice::selectStation(ss);
		}
	}

}

//vector<WeatherStation>::iterator s;

//std::find(stations.begin(), stations.end(), name);

/*std::find(stations.begin(),
             stations.end(),
             [&cs = name]
             (const WeatherStation& s) -> bool { return cs == s; });

//ImperialStation *s = std::find(stations.begin(), stations.end(), name);
/*if (flag != stations.end()) {
	//WeatherOffice::selectStation();
}*/

//WeatherOffice::selectStation(s);

//string currentName = cs->getStationName();
//ImperialStation *ss = stations.data();


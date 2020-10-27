/*
 * ImperialOffice.h
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */

#ifndef IMPERIALOFFICE_H_
#define IMPERIALOFFICE_H_

#include "WeatherOffice.h"

class ImperialOffice : public WeatherOffice {

public:
	ImperialOffice();
	ImperialOffice(const char *);
	void addStation(const char *);
	//void getStation(WeatherStation*);
	void selectStation(const char*);
};

#endif /* IMPERIALOFFICE_H_ */

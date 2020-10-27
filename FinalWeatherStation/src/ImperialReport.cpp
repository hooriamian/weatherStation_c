/*
 * ImperialReport.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include "ImperialReport.h"
#include <string>
#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

ImperialReport::ImperialReport() {}

ImperialReport::ImperialReport(int t, int ws, string wd)//:WeatherReport(t, ws, wd) {
{
		this->temperature = t;
		this->windSpeed = ws;
		this->windDirection = wd;
}

int ImperialReport::getWindChill() {
	return (35.74 + (0.6215 * temperature) - (35.75 * pow(windSpeed, 0.16)) + (0.4275 * temperature) * pow(windSpeed, 0.16));
}

void ImperialReport::printWeather() {
	char date[18];
	time_t t = time(0);
	struct tm *tm;
	tm = localtime(&t);
	strftime(date, sizeof(date),"%Y/%m/%d" " %H:%M", tm);
	printf("Logged : %s\n ", date);

	std::cout << "Temperature : " << temperature << " F," << " Wind : " << windSpeed << " MPH " << windDirection << " with a Wind Chill of " << getWindChill() << " F." << endl;
	std::cout << "------------------------------------------" << endl;
}

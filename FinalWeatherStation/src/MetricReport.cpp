/*
 * MetricReport.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include "MetricReport.h"
#include <string>
#include <iostream>
#include <cmath>
/*
#include <stdio.h>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

std::time_t t = std::time(nullptr);
std::tm tm = *std::localtime(&t);
std::ostringstream oss; */

using namespace std;

MetricReport::MetricReport() {}

MetricReport::MetricReport(int t, int ws, string wd)//:WeatherReport(t, ws, wd)  {
{
	this->temperature = t;
	this->windSpeed = ws;
	this->windDirection = wd;
}

int MetricReport::getWindChill() {
	return (13.12 + (0.6215 * temperature) - (11.37 * pow(windSpeed, 0.16)) + (0.3965 * temperature) * pow(windSpeed, 0.16));
}

void MetricReport::printWeather() {
	char date[18];
	time_t t = time(0);
	struct tm *tm;
	tm = localtime(&t);
	strftime(date, sizeof(date),"%Y/%m/%d" " %H:%M", tm);
	printf("Logged : %s\n ", date);
	std::cout << "Temperature : " << temperature << " C" << "Wind : " << windSpeed << " KPH" <<  windDirection << " with a Wind Chill of " << getWindChill() << " C." << endl;
	std::cout << "------------------------------------------" << endl;

}



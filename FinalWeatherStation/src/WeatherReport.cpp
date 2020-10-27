/*
 * WeatherReport.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include "WeatherReport.h"

WeatherReport::WeatherReport(){

}

WeatherReport::WeatherReport(int t, int ws, string wd) {
	temperature = t;
	windSpeed = ws;
	windDirection = wd;
}

int WeatherReport :: getTemperature() {
	return this->temperature;
}

int WeatherReport :: getWindSpeed() {
	return this->windSpeed;
}

string WeatherReport :: getWindDirection() {
	return this->windDirection;
}

void WeatherReport :: setTemperature(int t) {
	this->temperature = t;
}

void WeatherReport :: setWindSpeed(int ws) {
	this->windSpeed = ws;
}

void WeatherReport :: setWindDirection(string wd) {
	this->windDirection = wd;
}

int WeatherReport :: getWindChill() {
	return 0;
}

void WeatherReport :: printWeather() {

}


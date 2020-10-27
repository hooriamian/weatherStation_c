/*
 * MetricStation.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: user
 */
#include "MetricStation.h"
#include "MetricReport.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

MetricStation::MetricStation() {}

MetricStation::MetricStation(const char *n){
	name = n;
}

void MetricStation::addReport(int t, int ws, string wd) {
	MetricReport *r = new MetricReport(t, ws, wd);
	weatherReports.push_back(r);
	cw = r;
}

void MetricStation::printReports() {
	cout << "----- " << name << " Metric Weather Station -----" << endl;

	for(int i = 0; i < weatherReports.size(); ++i)
	    {
        	cout << weatherReports[i] << endl;

	    }

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}
}

void MetricStation::printTempSummary() {

	int sum = 0;
	int high = 0;
	int low = 0;
	int avg;

	for (int i = 0; i < weatherReports.size(); i++)
	{
		sum = sum + weatherReports[i]->getTemperature();
	}

	avg = sum / weatherReports.size();

	for (int j = 0; j < weatherReports.size(); j++) {
		if (high > weatherReports[j]->getTemperature()){
			high = weatherReports[j]->getTemperature();
		}

		if (low < weatherReports[j]->getTemperature()) {
			low = weatherReports[j]->getTemperature();
		}

		}

	cout << avg << " C" << " | High: " << high << " C" << " | Low: " << " C. ";

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}

}

void MetricStation::printWindSummary() {

	int sum = 0;
	int avg;

	for (int i = 0; i < weatherReports.size(); i++)
	{
		sum = sum + weatherReports[i]->getWindSpeed();
	}

	avg = sum / weatherReports.size();

	cout << avg << " KPH" << endl;

	if (weatherReports.empty()) {
		cout << "Null" << endl;
	}

}

void MetricStation::setHistory(int h) {

	weatherReports.resize(h);

}

int MetricStation::getHistory() {

	return this->weatherReports.size();

}

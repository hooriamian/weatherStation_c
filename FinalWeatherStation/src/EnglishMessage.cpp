/*
 * EnglishMessage.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include "EnglishMessage.h"

const char *EnglishMessage::getWelcome() {
	return "Welcome to the Weather Station Program!" ;
}

const char *EnglishMessage::getOfficeName() {
	return "Please Enter the Office Name : ";
}

const char *EnglishMessage::printOfficeName() {
	return " Weather Office";
}

const char *EnglishMessage::getStationName() {
	return "Please Enter the Station Name : ";
}

const char *EnglishMessage::getUnit() {
	return "Select Unit Measurement: \n1. Imperial \n2. Metric ";
}

const char *EnglishMessage::getHistorySize() {
	return "Enter the Number of Reports : ";
}

const char *EnglishMessage::printHistoryError() {
	return "Error: History is full :( ";
}

const char *EnglishMessage::printMenu() {
	return "Select an Option : \n1. Add Station \n2. Add Weather Report \n3. Select Station \n4. Print Current Report \n5. Print Stations \n6. Print Summary Report \n7. Print Daily Report \n8. Quit";
}

const char *EnglishMessage::getTemperature() {
	return "Enter the Temperature : ";
}

const char *EnglishMessage::getWindSpeed() {
	return "Enter the Wind Speed : ";
}

const char *EnglishMessage::getWindDirection() {
	return "Enter the Wind Direction : ";
}


const char *EnglishMessage::printCurrentReport() {
	return "----- Current Report -----";
}

const char *EnglishMessage::printSummary() {
	return "The Temperature Average is : ";
}

const char *EnglishMessage::printWindSpeedSummary() {
	return "The Wind Speed Average is : ";
}

const char *EnglishMessage::printSummaryM() {
	return "----- Summary Report -----";
}

const char *EnglishMessage::printDaily() {
	return " Station Daily Reports";
}

const char *EnglishMessage::printGoodbye() {
	return "Exiting Program. Have a Good Day!";
}

const char *EnglishMessage::printNumError() {
	return "Error : Enter a Numerical Value.";
}

const char *EnglishMessage::printNumHighError() {
	return "Error : The Number you entered is too high.";
}

const char *EnglishMessage::printNumLowError() {
	return "Error : The Number you entered is too low.";
}

const char *EnglishMessage::printWindDirError() {
	return "Error: Enter [N, NE, E, SE. S, SW, W, NW]";
}

const char *EnglishMessage::printWindDirError2() {
	return "Error: Numeric Input. Enter [N, NE, E, SE. S, SW, W, NW]";
}

const char *EnglishMessage::printSelectionChoiceError() {
	return "Error: Invalid Selection Choice. Try Again.";
}


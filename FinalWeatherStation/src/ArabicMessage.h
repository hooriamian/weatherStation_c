/*
 * ArabicMessage.h
 *
 *  Created on: Apr 23, 2019
 *      Author: user
 */

#ifndef ARABICMESSAGE_H_
#define ARABICMESSAGE_H_
#include "Message.h"

class ArabicMessage : public Message {

public:

	const char *getWelcome();
	const char *getOfficeName();
	const char *printOfficeName();
	const char *getStationName();
	const char *getUnit();
	const char *getHistorySize();
	const char *printHistoryError();

	const char *printMenu();

	const char *getTemperature();
	const char *getWindSpeed();
	const char *getWindDirection();

	const char *printCurrentReport();
	const char *printSummary();
	const char *printWindSpeedSummary();
	const char *printSummaryM();
	const char *printDaily();
	const char *printGoodbye();

	//ERRORS
	const char *printNumError();
	const char *printNumHighError();
	const char *printNumLowError();
	const char *printWindDirError();
	const char *printWindDirError2();
	const char *printSelectionChoiceError();

};



#endif /* ARABICMESSAGE_H_ */

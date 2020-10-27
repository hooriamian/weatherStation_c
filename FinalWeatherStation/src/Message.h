/*
 * Message.h
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

class Message {

public:
	virtual const char *getWelcome() = 0;
	virtual const char *getOfficeName() = 0;
	virtual const char *printOfficeName() = 0;
	virtual const char *getStationName() = 0;
	virtual const char *getUnit() = 0;
	virtual const char *getHistorySize() = 0;
	virtual const char *printHistoryError() = 0;

	virtual const char *printMenu() = 0;

	virtual const char *getTemperature() = 0;
	virtual const char *getWindSpeed() = 0;
	virtual const char *getWindDirection() = 0;

	virtual const char *printCurrentReport() = 0;
	virtual const char *printSummary() = 0;
	virtual const char *printWindSpeedSummary() = 0; //////
	virtual const char *printSummaryM() = 0;
	virtual const char *printDaily() = 0;
	virtual const char *printGoodbye() = 0;

	//ERRORS
	virtual const char *printNumError() = 0;
	virtual const char *printNumHighError() = 0;
	virtual const char *printNumLowError() = 0;
	virtual const char *printWindDirError() = 0;
	virtual const char *printWindDirError2() = 0;
	virtual const char *printSelectionChoiceError() = 0;

};

#endif /* MESSAGE_H_ */

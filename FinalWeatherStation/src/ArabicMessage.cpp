/*
 * ArabicMessage.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: user
 */

#include "ArabicMessage.h"

const char *ArabicMessage::getWelcome() {
	return "مرحبًا بك في محطة الطقس!";
}

const char *ArabicMessage::getOfficeName() {
	return " : الرجاء إدخال اسم المكتب";
}

const char *ArabicMessage::printOfficeName() {
	return "مكتب الطقس";
}

const char *ArabicMessage::getStationName() {
	return  " : الرجاء إدخال اسم المحطة";
}

const char *ArabicMessage::getUnit() {
	return " : حدد وحدة القياس \n1. امبيريال \n2. میٹرک ";
}

const char *ArabicMessage::getHistorySize() {
	return ": أدخل عدد التقارير";
}

const char *ArabicMessage::printHistoryError() {
	return "خطأ: حجم السجل ممتلئ :(";
}

const char *ArabicMessage::printMenu() {
	return "حدد اختيارا : \n1. إضافة محطة \n2. إضافة تقرير الطقس \n3. اختر المحطة \n4. طباعة التقرير الحالي \n5. محطات الطباعة \n6.  طباعة ملخص التقرير \n7. طباعة التقرير اليومي \n8. استقال";
}

const char *ArabicMessage::getTemperature() {
	return ": درجہ حرارت درج کریں ";
}

const char *ArabicMessage::getWindSpeed() {
	return ": أدخل سرعة الرياح";
}

const char *ArabicMessage::getWindDirection() {
	return ": أدخل اتجاه الرياح";
}


const char *ArabicMessage::printCurrentReport() {
	return " ----- التقرير الحالي ----- ";
}

const char *ArabicMessage::printSummary() {
	return "متوسط ​​درجة الحرارة هو:";
}

const char *ArabicMessage::printWindSpeedSummary() {
	return "متوسط ​​سرعة الرياح: ";
}

const char *ArabicMessage::printSummaryM() {
	return " ------ تقرير ملخص ----- ";
}

const char *ArabicMessage::printDaily() {
	return " ----- تقرير يومي ----- ";
}

const char *ArabicMessage::printGoodbye() {
	return "برنامج الخروج. اتمنى لك يوم جيد!";
}

const char *ArabicMessage::printNumError() {
	return "خطأ: أدخل قيمة عددية.";
}

const char *ArabicMessage::printNumHighError() {
	return "خطأ: الرقم الذي أدخلته مرتفع جدًا.";
}

const char *ArabicMessage::printNumLowError() {
	return "Error : The Number you entered is too low.";
}

const char *ArabicMessage::printWindDirError() {
	return "خطأ: أدخل [N، NE، E، SE. S ، SW ، W ، NW]";
}

const char *ArabicMessage::printWindDirError2() {
	return "خطأ: إدخال رقمي. أدخل [N، NE، E، SE. S ، SW ، W ، NW]";
}

const char *ArabicMessage::printSelectionChoiceError() {
	return "خطأ: اختيار التحديد غير صالح. حاول مرة أخري.";
}



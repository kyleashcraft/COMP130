#ifndef TIME_H
#define TIME_H

#include "timeH.h"
#include <ctime>

using namespace std;

Time::Time(){
	hours = (time(0) % (60 * 60 * 24)) / (60 * 60);
	minutes = (time(0) % (60 * 60)) / 60;
	seconds = time(0) % 60;
}

Time::Time(int elapseTime) {
	hours = (elapseTime % (60 * 60 * 24)) / (60 * 60);
	minutes = (elapseTime % (60 * 60)) / 60;
	seconds = elapseTime % 60;
}

Time::Time(int p_hours, int p_minutes, int p_seconds){
	hours >= 24 ? hours = p_hours % 24 : hours = p_hours;
	minutes >= 60 ? minutes = p_minutes % 60 : minutes = p_minutes;
	seconds >= 60 ? seconds = p_seconds % 60 : seconds = p_seconds;
}

int Time::getHours(){
	return hours;
}

int Time::getMinutes(){
	return minutes;
}

int Time::getSeconds(){
	return seconds;
}

void Time::setTime(int elapseTime){
	hours = (elapseTime % (60 * 60 * 24)) / (60 * 60);
	minutes = (elapseTime % (60 * 60)) / 60;
	seconds = elapseTime % 60;
}

#endif

// Created by MuhammadHamza on 14/11/2024.

#ifndef TIME_MANIPULATION_FUNCTIONS_HPP
#define TIME_MANIPULATION_FUNCTIONS_HPP

#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
using namespace std;

// Function to parse date and time string and populate std::tm structure
void parseDate(const string &dateStr, tm &time);

void parseDateTime(const string &dateTimeStr, tm &time);

string tmDTToString(const tm &tm);

string tmDToString(const tm &tm);

tm *getCurrentTimeTm();

time_t getCurrentTime();

string getCurrentTimeInStrForm();

double diff2TimeTInSec(const time_t &endTime, const time_t &startTime);

int diff2TimeTInMin(const time_t &endTime, const time_t &startTime);

int diff2TimeTInHrs(const time_t &endTime, const time_t &startTime);

int diff2TimeTInDays(const time_t &endTime, const time_t &startTime);

double diffTimeTToCurrInSec(const time_t &startTime);

double diffTimeTFromCurrInSec(const time_t &endTime);

double diffTmInSec(const tm &endTime, const tm &startTime);

int diffTmInMin(const tm &endTime, const tm &startTime);

int diffTmInHrs(const tm &endTime, const tm &startTime);

int diffTmInDays(const tm &endTime, const tm &startTime);

double diffTmToCurrInSec(const tm &startTime);

double diffTmFromCurrInSec(const tm &endTime);

bool compare2TmDates(const tm &t1, const tm &t2);

void parseDate(const string &dateStr, tm &time) {
    istringstream ion(dateStr);
    ion >> get_time(&time, "%d-%m-%Y");
    if (ion.fail()) {
        cerr << "Error parsing the input string." << endl;
        return;
    }
}

void parseDateTime(const string &dateTimeStr, tm &time) {
    istringstream iss(dateTimeStr);
    string datePart, timePart, ampm;
    // Extract date and time parts
    iss >> datePart >> timePart >> ampm;
    // Parse date
    istringstream ion(datePart);
    ion >> get_time(&time, "%d-%m-%Y");
    // Parse time
    int hour, min;
    char colon;
    istringstream(timePart) >> hour >> colon >> min;
    // Adjust hour for PM time
    if (ampm == "pm" || ampm == "PM") {
        if (hour != 12) {
            hour += 12;
        }
    } else if (ampm == "am" || ampm == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    }
    time.tm_hour = hour;
    time.tm_min = min;
    time.tm_sec = 0; // For simplicity, setting seconds to 0
}

string tmDTToString(const tm &tm) {
    ostringstream ios;
    ios << put_time(&tm, "%d-%m-%Y %I:%M %p");
    return ios.str();
}

string tmDToString(const tm &tm) {
    ostringstream ios;
    ios << put_time(&tm, "%d-%m-%Y");
    return ios.str();
}

tm *getCurrentTimeTm() {
    time_t currentTime = time(nullptr);
    return localtime(&currentTime);
}

time_t getCurrentTime() {
    return time(nullptr);
}

string getCurrentTimeInStrForm() {
    time_t currentTime = time(nullptr);
    return ctime(&currentTime);
}

double diff2TimeTInSec(const time_t &endTime, const time_t &startTime) {
    // t1 is EndTime while t2 is StartTime
    return difftime(endTime, startTime);
}

int diff2TimeTInMin(const time_t &endTime, const time_t &startTime) {
    return static_cast<int>(diff2TimeTInSec(endTime, startTime)) / 60;
}

int diff2TimeTInHrs(const time_t &endTime, const time_t &startTime) {
    return diff2TimeTInMin(endTime, startTime) / 60;
}

int diff2TimeTInDays(const time_t &endTime, const time_t &startTime) {
    return diff2TimeTInHrs(endTime, startTime) / 24;
}

double diffTimeTToCurrInSec(const time_t &startTime) {
    // Give Difference in Seconds from a Particular time to the current time through time_t
    return difftime(getCurrentTime(), startTime);
}

double diffTimeTFromCurrInSec(const time_t &endTime) {
    // Give Difference in Seconds to a Particular time from the current time through time_t
    return difftime(endTime, getCurrentTime());
}

double diffTmInSec(const tm &endTime, const tm &startTime) {
    // Give Difference in Seconds of 2 tm structure
    tm endTm = endTime;
    tm startTm = startTime;
    time_t endT = mktime(&endTm);
    // Make Time Function which Converts a tm Structure to time_t object which itself shows the time in seconds form 1900
    time_t startT = mktime(&startTm);
    return difftime(endT, startT);
}

int diffTmInMin(const tm &endTime, const tm &startTime) {
    return static_cast<int>(diffTmInSec(endTime, startTime)) / 60;
}

int diffTmInHrs(const tm &endTime, const tm &startTime) {
    return diffTmInMin(endTime, startTime) / 60;
}

int diffTmInDays(const tm &endTime, const tm &startTime) {
    return diffTmInHrs(endTime, startTime) / 24;
}

double diffTmToCurrInSec(const tm &startTime) {
    // Give Difference in Seconds from a Particular time to the current time through tm structure
    tm startTm = startTime;
    time_t startT = mktime(&startTm);
    return difftime(getCurrentTime(), startT);
}

double diffTmFromCurrInSec(const tm &endTime) {
    // Give Difference in Seconds of a Particular time from the current time through tm structure
    tm endTm = endTime;
    time_t endT = mktime(&endTm);
    return difftime(endT, getCurrentTime());
}

bool compare2TmDates(const tm &t1, const tm &t2) {
    // Compare Dates Stored in 2 tm Structures
    if (t1.tm_year == t2.tm_year && t1.tm_mon == t2.tm_mon && t1.tm_mday == t2.tm_mday) {
        return true;
    }
    return false;
}

#endif //TIME_MANIPULATION_FUNCTIONS_HPP

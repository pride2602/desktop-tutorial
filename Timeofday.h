#pragma once
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function

using namespace std;

// function to wish user according to time
void wishme() {
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm* time = localtime(&now);

    if (time->tm_hour < 12) {
        cout << "Good Morning Sir" << endl;
        string phrase = "Good Morning Sir";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16) {
        cout << "Good Afternoon sir" << endl;
        string phrase = "Good Afternoon sir";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour > 16 && time->tm_hour < 24) {
        cout << "Good Evening sir" << endl;
        string phrase = "Good Evening sir";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The date and time is " << endl
        << dt << endl;
}
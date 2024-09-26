#include <iostream>
#include "TV.h"

using std::cout;
using std::endl;

void TV::pushPower() {
    if(status == false) {
        status = true;
        cout << "ON" << endl;
    }else {
        status = false;
        cout << "OFF" << endl;
    }
}

void TV::channelUp() {
    if(status == false) {
        cout << "ERROR : TV status is off" << endl;
    }else if(channel>=CHANNEL_MAX) {
        cout << "ERROR : now is max channel" << endl;
    }else {
        channel++;
    }
}

void TV::channelDown() {
    if(status == false) {
        cout << "ERROR : TV status is off" << endl;
    }else if(channel<=CHANNEL_MIN) {
        cout << "ERROR : now is min channel" << endl;
    }else {
        channel--;
    }
}

void TV::volumeUp() {
    if(status == false) {
        cout << "ERROR : TV status is off" << endl;
    }else if(volume>=VOLUME_MAX) {
        cout << "ERROR : now is max volume" << endl;
    }else {
        volume++;
    }
}

void TV::volumeDown() {
    if(status == false) {
        cout << "ERROR : TV status is off" << endl;
    }else if(volume<=VOLUME_MIN) {
        cout << "ERROR : now is min volume" << endl;
    }else {
        volume--;
    }
}
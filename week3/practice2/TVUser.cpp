#include "TV.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    TV tv;
    tv.channelUp();
    tv.channelDown();
    tv.volumeUp();
    tv.volumeDown();

    tv.pushPower();

    cout << "channel: " << tv.channel << endl;
    tv.channelDown();
    cout << "channel: " << tv.channel << endl;
    tv.channelUp();
    cout << "channel: " << tv.channel << endl;
    tv.channelUp();
    cout << "channel: " << tv.channel << endl;
    tv.channelUp();
    cout << "channel: " << tv.channel << endl;
    tv.channelUp();
    cout << "channel: " << tv.channel << endl;
    tv.channelUp();


    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();
    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();
    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();
    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();
    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();
    cout << "volume: " << tv.volume << endl;
    tv.volumeDown();

    tv.volume = 10;
    cout << "volume: " << tv.volume << endl;
    tv.volumeUp();





}

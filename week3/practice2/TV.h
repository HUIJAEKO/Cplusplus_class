#ifndef TV_H
#define TV_H

class TV {
public:
    const int CHANNEL_MAX = 5;
    const int CHANNEL_MIN = 1;
    const int VOLUME_MAX = 10;
    const int VOLUME_MIN = 0;

    bool status = false;
    int channel = 1;
    int volume = 5;

    void pushPower();
    void channelUp();
    void channelDown();
    void volumeUp();
    void volumeDown();
};

#endif //TV_H

#pragma once

#include "ofMain.h"

class Stripe2 : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        bool rotateFlag;
        float degree;
        int colorType;

};

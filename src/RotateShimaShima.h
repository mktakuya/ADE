#pragma once

#include "ofMain.h"

class RotateShimaShima : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        bool rotateFlag;
        float degree;
        int colorType;

};

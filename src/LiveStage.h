#pragma once

#include "ofMain.h"

class LiveStage : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        static const int CIRCLES = 10;
        static const int DIAM = 15;
        static const int PENLIGHT = 30;

        ofPoint Particlepoint[10];
        ofPoint RightPenLight[30], LeftPenLight[30];
        ofVec2f Particlevec[10];
        float timer;

        int colorType;

};

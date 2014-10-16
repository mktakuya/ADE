#pragma once

#include "ofMain.h"

class Ending : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        float degree[3];
        float degdeg[3];

        ofTrueTypeFont font;

};

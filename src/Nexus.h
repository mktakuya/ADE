#pragma once

#include "ofMain.h"

class Nexus : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        ofVec2f position[50];

};

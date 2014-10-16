#pragma once

#include "ofMain.h"

class Trink : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        float circles;
        float d;
        int *c;
        int circleDiam[1000];
        ofVec2f circlePosition[1000];
        float deg[1000];

};

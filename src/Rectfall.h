#pragma once

#include "ofMain.h"

class Rectfall : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        int rectcolorNum[3], trianglecolorNum[3];
        float triangle_interval;
        float triangleDegree[3];
        bool fall;
        float triangle_locate_height, radius;
        ofColor colors[3];
        ofImage crystal[3];

};

#pragma once

#include "ofMain.h"

class Triangle : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        float outline;
        int pieces;
        int yboader;
        int xboader;

        ofVec2f TrianglePositionVector[120][3];
        ofVec2f TriangleDirectionVector[120];
        
};

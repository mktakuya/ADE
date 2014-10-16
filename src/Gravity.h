#pragma once

#include "ofMain.h"

class Gravity : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        float outline;
        int pieces;
        int yboader;
        int xboader;
            float x, y;

        float gravity, friction;

        float alpha[120];
        float pattern[120];

        ofVec2f TrianglePositionVector[120][3];
        ofVec2f TriangleDirectionVector[120];
        
};

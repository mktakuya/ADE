#pragma once

#include "ofMain.h"

class Intro : public ofBaseApp{
    public:
        void setup();
        void update();
        void draw();
        void drawBigRect(float *param);
        void drawSomeRect(float *param, int *switcher);
        
        int clocks;
        int num;
        int rectmode;
        int pastrectcolor;
        int nowrectcolor; 
        int rectswitch[25];
        float firstSequenceBuf;
        float SecondSequenceBuf;
        float width;
        float height;
        float xinterval;
        float yinterval;
};

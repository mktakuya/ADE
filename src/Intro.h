#pragma once

#include "ofMain.h"

class Intro : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    void drawBigRect(float *param);
    void drawSomeRect(float *param, int *switcher);
    
    const int CLOCK = 600;
    const int NUM = 5;
    int rectmode;
    float param[4][4] = { {0, 0, 0, 255}, {255, 255, 255, 127}, {233, 255, 0, 127}, {0, 195, 255, 127} };
    float rectColor[4] = {75, 100, 161, 127};
    int pastrectcolor;
    int nowrectcolor; 
    int rectswitch[5 * 5] = {0};
    float firstSequenceBuf;
    float SecondSequenceBuf;
    float width;
    float height;
    float xinterval;
    float yinterval;
};

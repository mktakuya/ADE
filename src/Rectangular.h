#pragma once

#include "ofMain.h"

class Rectangular : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    
    const int NUM = 10;
    const int FPS = 0.02;
    
    ofBoxPrimitive box;
    
    bool hide_black;
    bool hide_white;
    
    float sec;
    float colorparam[3][3] = { {255, 0, 248}, {0, 85, 255}, {250, 255, 0} };
    float height[10];
    
    int limits[10 + 1] = {0};
    int ypoint[10];
    int xpoint[10];
};

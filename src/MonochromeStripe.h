#pragma once

#include "ofMain.h"

class MonochromeStripe : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    int frame;
    
    bool colorFlag[5];
    
    int width;
};
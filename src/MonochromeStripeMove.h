#pragma once

#include "ofMain.h"

class MonochromeStripeMove : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    int frame;
    
    bool colorFlag[6];
    
    int width;
};
#pragma once

#include "ofMain.h"

class PizzaStripe : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    int frame;
    
    int prevColorFlag;
    int colorFlag;
    
    int bandR[5];
    int bandG[5];
    int bandB[5];
    
    int width;
};
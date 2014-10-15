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
    
    int bandR[6];
    int bandG[6];
    int bandB[6];
    
    int width;
};
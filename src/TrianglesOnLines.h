#pragma once

#include "ofMain.h"

class TrianglesOnLines : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    int frame;
    
    int space;
    
    static const int TRIANGLE_NUM = 20;
    
    int colorFlag[TRIANGLE_NUM];
    
    int triangleR[TRIANGLE_NUM];
    int triangleG[TRIANGLE_NUM];
    int triangleB[TRIANGLE_NUM];
    
    int triangleX[TRIANGLE_NUM];
    int triangleY[TRIANGLE_NUM];
};
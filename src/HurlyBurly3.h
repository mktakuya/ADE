#pragma once

#include "ofMain.h"

class HurlyBurly3 : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    int frame;
    
    ofTrueTypeFont font;
    
    static const int DIAMOND_NUM = 50;
    
    int diamondWidth[DIAMOND_NUM];
    int diamondHeight[DIAMOND_NUM];
    
    int diamondX[DIAMOND_NUM];
    int diamondY[DIAMOND_NUM];
    
    int colorNumbers[DIAMOND_NUM]; // 0: シアン 1: マゼンタ 2: イエロー
};
#pragma once

#include "ofMain.h"

class HurlyBurly4 : public ofBaseApp{
    
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
    
    static const int FONTS_LINE = 8;
    static const int FONTS_COLUMN = 3;
    
    ofTrueTypeFont fonts[FONTS_LINE][FONTS_COLUMN];
    
    int frame;
    
    int colorFlag[FONTS_LINE][FONTS_COLUMN];
    
    int fontWidth;
    int fontHeight;
    
    int fontX[FONTS_LINE][FONTS_COLUMN];
    int fontY[FONTS_LINE][FONTS_COLUMN];
    
    int fontR[FONTS_LINE][FONTS_COLUMN];
    int fontG[FONTS_LINE][FONTS_COLUMN];
    int fontB[FONTS_LINE][FONTS_COLUMN];
};
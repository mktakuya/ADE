#pragma once

#include "ofMain.h"

#define TILE_LINE 6
#define TILE_COLUMN 10

class Tile : public ofBaseApp{
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
    
    int colorFlag[TILE_LINE][TILE_COLUMN];
    
    int tileWidth;
    int tileHeight;
    
    int tileX[TILE_LINE][TILE_COLUMN] = {0};
    int tileY[TILE_LINE][TILE_COLUMN] = {0};
    
    int tileR[TILE_LINE][TILE_COLUMN];
    int tileG[TILE_LINE][TILE_COLUMN];
    int tileB[TILE_LINE][TILE_COLUMN];
};

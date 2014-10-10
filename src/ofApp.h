#pragma once

#include "ofMain.h"

// Scenes
#include "Intro.h"
#include "Rectangular.h"
#include "Bubbles.h"
#include "Tile.h"
#include "EnergyBliss.h"

#include "Stripe.h"
#include "Rectfall.h"
#include "Hexagon.h"
#include "LiveStage.h"
#include "Arc.h"

class ofApp : public ofBaseApp{
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
    
    int sceneNumber;
    bool sceneChangedFlag;
    
    // Scenes
    Intro s01Intro;
    Rectangular s02Rectangular;
    Bubbles s03Bubbles;
    Tile s04Tile;
    EnergyBliss s05EnergyBliss;
    
    Stripe sXXStripe;
    
    
    Rectfall sX1Rectfall;
    Hexagon sX2Hexagon;
    LiveStage SX3LiveStage;
    Arc SX4Arc;
};

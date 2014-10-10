#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFullscreen(true);
    ofHideCursor();
    sceneChangedFlag = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    // update scenes
    switch (sceneNumber) {
        case 1:
            if (sceneChangedFlag == true) {
                s01Intro.setup();
                sceneChangedFlag = false;
            }
            s01Intro.update();
            break;
            
        case 2:
            if (sceneChangedFlag == true) {
                s02Rectangular.setup();
                sceneChangedFlag = false;
            }
            s02Rectangular.update();
            break;
            
        case 3:
            if (sceneChangedFlag == true) {
                s03Bubbles.setup();
                sceneChangedFlag = false;
            }
            s03Bubbles.update();
            break;
            
        case 4:
            if (sceneChangedFlag == true) {
                ofFill();
                s04Tile.setup();
                sceneChangedFlag = false;
            }
            s04Tile.update();
            break;
            
        case 5:
            if (sceneChangedFlag == true) {
                s05EnergyBliss.setup();
                sceneChangedFlag = false;
            }
            s05EnergyBliss.update();
            break;
            
        // とりあえず
        case 6:
            if (sceneChangedFlag == true) {
                sXXStripe.setup();
                sceneChangedFlag = false;
            }
            sXXStripe.update();
            break;
            
        // とりあえず
        case 7:
            if (sceneChangedFlag == true) {
                sX1Rectfall.setup();
                sceneChangedFlag = false;
            }
            sX1Rectfall.update();
            break;
            
        case 8:
            if (sceneChangedFlag == true){
                sX2Hexagon.setup();
                sceneChangedFlag = false;
            }
            sX2Hexagon.update();
            break;
            
        case 9:
            if (sceneChangedFlag == true) {
                SX3LiveStage.setup();
                sceneChangedFlag = false;
            }
            SX3LiveStage.update();
            break;
            
        case 10:
            if (sceneChangedFlag == true) {
                SX4Arc.setup();
                sceneChangedFlag = false;
            }
            SX4Arc.update();
            break;
            
        case 11:
            if (sceneChangedFlag == true) {
                SX5Visualizer.setup();
                sceneChangedFlag = false;
            }
            SX5Visualizer.update();
            break;
            
        case 12:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                SX6Ink.setup();
                sceneChangedFlag = false;
            }
            SX6Ink.update();
            break;
            
        case 13:
            if (sceneChangedFlag == true) {
                ofBackground(255);
                SX7Wave.setup();
                sceneChangedFlag = false;
            }
            SX7Wave.update();
            break;
            
        case 14:
            if (sceneChangedFlag == true) {
                ofBackground(255);
                SX8Pentagon.setup();
                sceneChangedFlag = false;
            }
            SX8Pentagon.update();
            break;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw scenes;
    switch (sceneNumber) {
        case 1:
            s01Intro.draw();
            break;
            
        case 2:
            s02Rectangular.draw();
            break;
            
        case 3:
            s03Bubbles.draw();
            break;
            
        case 4:
            s04Tile.draw();
            break;
            
        case 5:
            s05EnergyBliss.draw();
            break;
            
        case 6:
            sXXStripe.draw();
            break;
            
        case 7:
            sX1Rectfall.draw();
            break;
            
        case 8:
            sX2Hexagon.draw();
            break;
            
        case 9:
            SX3LiveStage.draw();
            break;
            
        case 10:
            SX4Arc.draw();
            break;
            
        case 11:
            SX5Visualizer.draw();
            break;
            
        case 12:
            SX6Ink.draw();
            break;
            
        case 13:
            SX7Wave.draw();
            break;
            
        case 14:
            SX8Pentagon.draw();
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_RETURN) {
        sceneNumber++;
        sceneChangedFlag = true;
    }
    
    // Scenes
    switch (sceneNumber) {
        case 1:
            if (key == ' ') {
                if (s01Intro.rectmode == 1) {
                    s01Intro.rectmode = 0;
                } else {
                    s01Intro.rectmode = 1;
                }
            }
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

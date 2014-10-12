#include "ofApp.h"
int testColor = 30;

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
        case 0:
            break;
            
        case 1:
            if (sceneChangedFlag == true) {
                s01Intro.setup();
                sceneChangedFlag = false;
            }
            s01Intro.update();
            break;
            
        case 2:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                SX11MonochromeTile.setup();
                sceneChangedFlag = false;
            }
            SX11MonochromeTile.update();
            break;
            
        case 3:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                s02Rectangular.setup();
                sceneChangedFlag = false;
            }
            s02Rectangular.update();
            break;
            
        case 4:
            // 真っ白
            break;
            
        case 5:
            // 真っ黒
            break;
            
        case 6:
            if (sceneChangedFlag == true) {
                s03Bubbles.setup();
                sceneChangedFlag = false;
            }
            s03Bubbles.update();
            break;
            
        case 7:
            if (sceneChangedFlag == true) {
                ofFill();
                s04Tile.setup();
                sceneChangedFlag = false;
            }
            s04Tile.update();
            break;
            
        case 8:
            if (sceneChangedFlag == true) {
                s05EnergyBliss.setup();
                sceneChangedFlag = false;
            }
            s05EnergyBliss.update();
            break;
            
        case 9:
            if (sceneChangedFlag == true){
                sX2Hexagon.setup();
                sceneChangedFlag = false;
            }
            sX2Hexagon.update();
            break;
            
        case 10:
            if (sceneChangedFlag == true) {
                sXXStripe.setup();
                sceneChangedFlag = false;
            }
            sXXStripe.update();
            break;
            
        case 11:
            if (sceneChangedFlag == true) {
                SX3LiveStage.setup();
                sceneChangedFlag = false;
            }
            SX3LiveStage.update();
            break;
            
        case 12:
            break;
            
        case 13:
            break;
            
        case 14:
            if (sceneChangedFlag == true) {
                sX1Rectfall.setup();
                sceneChangedFlag = false;
            }
            sX1Rectfall.update();
            break;
            
        case 15:
            if (sceneChangedFlag == true) {
                SX4Arc.setup();
                sceneChangedFlag = false;
            }
            SX4Arc.update();
            break;
            
        case 16:
            if (sceneChangedFlag == true) {
                SX9HurlyBurly1.setup();
                sceneChangedFlag = false;
            }
            SX9HurlyBurly1.update();
            break;
            
        case 17:
            if (sceneChangedFlag == true) {
                SX10HurlyBurly2.setup();
                sceneChangedFlag = false;
            }
            SX10HurlyBurly2.update();
            break;
            
        case 18:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                ofSetCircleResolution(4);
                SX12HurlyBurly3.setup();
                sceneChangedFlag = false;
            }
            SX12HurlyBurly3.update();
            break;
            
        case 19:
            // Stripe2
            ofSetCircleResolution(22);
            break;
            
        case 20:
            // 左に向かって動くやつ
            break;
            
        case 21:
            // やきもちBaby
            break;
            
        case 22:
            if (sceneChangedFlag == true) {
                ofBackground(255);
                ofSetCircleResolution(128);
                ofNoFill();
                SX7Wave.setup();
                sceneChangedFlag = false;
            }
            SX7Wave.update();
            break;
            
        case 23:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                ofSetCircleResolution(22);
                ofFill();
                SX6Ink.setup();
                sceneChangedFlag = false;
            }
            SX6Ink.update();
            break;
            
        case 24:
            break;
            
        case 25:
            break;
            
        case 26:
            break;
            
        case 27:
            break;
            
        case 28:
            if (sceneChangedFlag == true) {
                ofBackground(0);
                SX5Visualizer.setup();
                sceneChangedFlag = false;
            }
            SX5Visualizer.update();
            break;
            
        case 50:
            break;
            
        case 51:
            if (sceneChangedFlag == true) {
                ofBackground(255);
                SX7Wave.setup();
                sceneChangedFlag = false;
            }
            SX7Wave.update();
            break;
            
        case 52:
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
        case 0:
            ofBackground(testColor, testColor, testColor);
            break;
            
        case 1:
            s01Intro.draw();
            break;
            
        case 2:
            SX11MonochromeTile.draw();
            break;
            
        case 3:
            s02Rectangular.draw();
            break;
            
        case 4:
            ofBackground(255);
            break;
            
        case 5:
            ofBackground(0);
            break;
            
        case 6:
            s03Bubbles.draw();
            break;
            
        case 7:
            s04Tile.draw();
            break;
            
        case 8:
            s05EnergyBliss.draw();
            break;
            
        case 9:
            sX2Hexagon.draw();
            break;
            
        case 10:
            sXXStripe.draw();
            break;
            
        case 11:
            SX3LiveStage.draw();
            break;
            
        case 12:
            ofBackground(0, 0, 255);
            break;
            
        case 13:
            ofBackground(0, 0, 255);
            break;
            
        case 14:
            sX1Rectfall.draw();
            break;
            
        case 15:
            SX4Arc.draw();
            break;
            
        case 16:
            SX9HurlyBurly1.draw();
            break;
            
        case 17:
            SX10HurlyBurly2.draw();
            break;
            
        case 18:
            SX12HurlyBurly3.draw();
            break;
            
        case 19:
            ofBackground(0, 0, 255);
            break;
            
        case 20:
            ofBackground(0, 0, 255);
            break;
            
        case 21:
            ofBackground(0, 0, 255);
            break;
            
        case 22:
            SX7Wave.draw();
            break;
            
        case 23:
            SX6Ink.draw();
            break;
            
        case 24:
            ofBackground(0, 0, 255);
            break;
            
        case 25:
            ofBackground(0, 0, 255);
            break;
            
        case 26:
            ofBackground(0, 0, 255);
            break;
            
        case 27:
            ofBackground(0, 0, 255);
            break;
            
        case 28:
            SX5Visualizer.draw();
            break;
            
        case 29:
            break;
            
            
            
        case 50:
            SX6Ink.draw();
            break;
            
        case 51:
            SX7Wave.draw();
            break;
            
        case 52:
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

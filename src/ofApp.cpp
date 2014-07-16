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

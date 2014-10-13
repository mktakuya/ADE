#include "OpeningTitle.h"

//--------------------------------------------------------------
void OpeningTitle::setup(){
    ofSetFullscreen(true);
    ofHideCursor();
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    ofSetCircleResolution(64);
    ofBackground(0, 0, 0, 128);
    radius = 250;
    
    mouseX = ofGetWidth() / 2;
    mouseY = ofGetHeight();
    
    font.loadFont("hiragino.otf", 90);
}

//--------------------------------------------------------------
void OpeningTitle::update(){
    if (grow == true) {
        radius += 15;
    } else {
        if (radius > 200) {
            radius -= 10;
        }
    }
}

//--------------------------------------------------------------
void OpeningTitle::draw(){
    ofSetColor(255, 255, 255);
    font.drawString("Tomakomai N.C.T.", 40, 150);
    font.drawString("50th Anniv.", 40, 300);
    
    ofSetColor(255, 255, 255);
    ofCircle(mouseX , mouseY, radius);
}

//--------------------------------------------------------------
void OpeningTitle::keyPressed(int key){
    
}

//--------------------------------------------------------------
void OpeningTitle::keyReleased(int key){
    
}

//--------------------------------------------------------------
void OpeningTitle::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void OpeningTitle::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void OpeningTitle::mousePressed(int x, int y, int button){
    grow = true;
}

//--------------------------------------------------------------
void OpeningTitle::mouseReleased(int x, int y, int button){
    grow = false;
}

//--------------------------------------------------------------
void OpeningTitle::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void OpeningTitle::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void OpeningTitle::dragEvent(ofDragInfo dragInfo){ 
    
}
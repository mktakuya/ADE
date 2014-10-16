#include "OpeningTitle.h"

//--------------------------------------------------------------
void OpeningTitle::setup(){
    ofSetFullscreen(true);
    ofHideCursor();
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    ofSetCircleResolution(64);
    ofBackground(0, 0, 0, 128);
    
    font.loadFont("hiragino.otf", 90);
}

//--------------------------------------------------------------
void OpeningTitle::update(){
}

//--------------------------------------------------------------
void OpeningTitle::draw(){
    ofSetColor(255, 255, 255);
    font.drawString("Tomakomai N.C.T.", 40, 150);
    font.drawString("50th Anniv.", 40, 300);
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
}

//--------------------------------------------------------------
void OpeningTitle::mouseReleased(int x, int y, int button){
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
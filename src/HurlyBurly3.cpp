#include "HurlyBurly3.h"

//--------------------------------------------------------------
void HurlyBurly3::setup(){
    
    for (int i = 0; i < DIAMOND_NUM; i++) {
        diamondWidth[i] = ofRandom(50, 150);
        
        diamondX[i] = ofRandom(0, ofGetWidth());
        diamondY[i] = ofRandom(0, ofGetHeight());
        
        colorNumbers[i] = ofRandom(0, 3);
    }
    
    font.loadFont("hiragino.otf", 120);
}

//--------------------------------------------------------------
void HurlyBurly3::update(){
    frame++;
    
    if (frame % 30 == 0) {
        for (int i = 0; i < DIAMOND_NUM; i++) {
            diamondWidth[i] = ofRandom(50, 150);
            diamondX[i] = ofRandom(0, ofGetWidth());
            diamondY[i] = ofRandom(0, ofGetHeight());
            colorNumbers[i] = ofRandom(0, 3);
        }
    }
}

//--------------------------------------------------------------
void HurlyBurly3::draw(){
    ofSetColor(255);
    font.drawString("Hurly Burly", 40, 150);
    
    for (int i = 0; i < DIAMOND_NUM; i++) {
        switch (colorNumbers[i]) {
            case 0:
                ofSetColor(0, 255, 255, 128);
                break;
                
            case 1:
                ofSetColor(255, 0, 255, 128);
                break;
                
            case 2:
                ofSetColor(255, 212, 0, 128);
                break;
        }
        ofCircle(diamondX[i], diamondY[i], diamondWidth[i]);
    }
}

//--------------------------------------------------------------
void HurlyBurly3::keyPressed(int key){
    
}

//--------------------------------------------------------------
void HurlyBurly3::keyReleased(int key){
    
}

//--------------------------------------------------------------
void HurlyBurly3::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void HurlyBurly3::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HurlyBurly3::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HurlyBurly3::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HurlyBurly3::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void HurlyBurly3::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void HurlyBurly3::dragEvent(ofDragInfo dragInfo){ 
    
}
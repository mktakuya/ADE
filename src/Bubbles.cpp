#include "ofMain.h"
#include "Bubbles.h"

//--------------------------------------------------------------
void Bubbles::setup(){
    ofBackground(255);
    ofSetLineWidth(1);
    ofSetCircleResolution(64);
    for (int i = 0; i < BUBBLES_NUM; i++) {
        bubbleR[i] = ofRandom(255);
        bubbleG[i] = ofRandom(255);
        bubbleB[i] = ofRandom(255);
        bubbleX[i] = ofRandom(ofGetWidth());
        bubbleY[i] = ofRandom(ofGetHeight());
        bubbleRadius[i] = ofRandom(10, 40);
        bubbleMaxSize[i] = ofRandom(60, 200);
    }
}

//--------------------------------------------------------------
void Bubbles::update(){
    for (int i = 0; i < BUBBLES_NUM; i++) {
        if (bubbleRadius[i] > bubbleMaxSize[i]) {
            bubbleX[i] = ofRandom(ofGetWidth());
            bubbleY[i] = ofRandom(ofGetHeight());
            bubbleRadius[i] = ofRandom(5, 30);
            bubbleMaxSize[i] = ofRandom(50, 200);
        }else {
            bubbleRadius[i]++;
        }
        if (bubbleY[i] > ofGetHeight()) {
            bubbleY[i] = 0;
        }
    }
}

//--------------------------------------------------------------
void Bubbles::draw(){
    for(int i = 0; i < BUBBLES_NUM; i++) {
        ofNoFill();
        ofSetColor(bubbleR[i], bubbleG[i], bubbleB[i]);
        ofCircle(bubbleX[i], bubbleY[i], bubbleRadius[i]);
    }
}

//--------------------------------------------------------------
void Bubbles::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Bubbles::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Bubbles::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Bubbles::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Bubbles::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Bubbles::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Bubbles::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Bubbles::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Bubbles::dragEvent(ofDragInfo dragInfo){
    
}

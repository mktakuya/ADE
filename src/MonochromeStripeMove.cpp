#include "MonochromeStripeMove.h"

//--------------------------------------------------------------
void MonochromeStripeMove::setup(){
    frame = 0;
    width = 240;
    
    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            colorFlag[i] = true;
        } else {
            colorFlag[i] = false;
        }
    }
}

//--------------------------------------------------------------
void MonochromeStripeMove::update(){
    frame++;
    
    if (frame == 60) {
        colorFlag[0] = false;
        colorFlag[1] = false;
        colorFlag[2] = false;
        colorFlag[3] = true;
        colorFlag[4] = true;
        colorFlag[5] = true;
    }
}

//--------------------------------------------------------------
void MonochromeStripeMove::draw(){
    for (int i = 0; i < 6; i++) {
        if (colorFlag[i] == true) {
            ofSetColor(0);
        } else {
            ofSetColor(255);
        }
        ofRect(width * i, 0, width, ofGetHeight());
    }
}
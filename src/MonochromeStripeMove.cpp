#include "MonochromeStripeMove.h"

//--------------------------------------------------------------
void MonochromeStripeMove::setup(){
    frame = 0;
    width = 240;
}

//--------------------------------------------------------------
void MonochromeStripeMove::update(){
    frame++;
    
    switch (frame / 30) {
        case 1:
            colorFlag[0] = false;
            colorFlag[1] = true;
            colorFlag[2] = false;
            colorFlag[3] = false;
            colorFlag[4] = false;
            colorFlag[5] = false;
            break;
            
        case 2:
            colorFlag[0] = false;
            colorFlag[1] = true;
            colorFlag[2] = false;
            colorFlag[3] = true;
            colorFlag[4] = false;
            colorFlag[5] = false;
            break;
            
        case 3:
            colorFlag[0] = false;
            colorFlag[1] = true;
            colorFlag[2] = false;
            colorFlag[3] = true;
            colorFlag[4] = false;
            colorFlag[5] = true;
            break;
            
        case 4:
            colorFlag[0] = false;
            colorFlag[1] = false;
            colorFlag[2] = false;
            colorFlag[3] = true;
            colorFlag[4] = true;
            colorFlag[5] = true;
            break;
            
        default:
            break;
    }
}

//--------------------------------------------------------------
void MonochromeStripeMove::draw(){
    for (int i = 0; i < 6; i++) {
        if (colorFlag[i] == true) {
            ofSetColor(0);
        } else {
            if (frame / 30 >= 4) {
                ofSetColor(255);
            } else {
                ofSetColor(255, 255, 255, 0);
            }
        }
        ofRect(width * i, 0, width, ofGetHeight());
    }
}
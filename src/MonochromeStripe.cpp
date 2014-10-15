#include "MonochromeStripe.h"

//--------------------------------------------------------------
void MonochromeStripe::setup(){
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
void MonochromeStripe::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < 6; i++) {
            if (colorFlag[i] == true) {
                colorFlag[i] = false;
            } else {
                colorFlag[i] = true;
            }
        }
    }
}

//--------------------------------------------------------------
void MonochromeStripe::draw(){
    for (int i = 0; i < 6; i++) {
        if (colorFlag[i] == true) {
            ofSetColor(0);
        } else {
            ofSetColor(255, 255, 255, 0);
        }
        ofRect(width * i, 0, width, ofGetHeight());
    }
}
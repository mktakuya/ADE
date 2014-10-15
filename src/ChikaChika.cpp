#include "ChikaChika.h"

//--------------------------------------------------------------
void ChikaChika::setup(){
    colorFlag = ofRandom(0, 3);
    frame = 0;
    
    switch (colorFlag) {
        case 0:
            ofBackground(0, 255, 255);
            break;
            
        case 1:
            ofBackground(255, 0, 255);
            break;
            
        case 2:
            ofBackground(255, 212, 0);
            break;
    }
}

//--------------------------------------------------------------
void ChikaChika::update(){
    colorFlag = ofRandom(0, 3);
}

//--------------------------------------------------------------
void ChikaChika::draw(){
    switch (colorFlag) {
        case 0:
            ofBackground(0, 255, 255);
            break;
            
        case 1:
            ofBackground(255, 0, 255);
            break;
            
        case 2:
            ofBackground(255, 212, 0);
            break;
    }
}
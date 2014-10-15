#include "PizzaStripe.h"

//--------------------------------------------------------------
void PizzaStripe::setup(){
    frame = 0;
    width = 288;
    colorFlag = -1;
    
    for (int i = 0; i < 5; i++) {
        if (colorFlag != -1) {
            prevColorFlag = colorFlag;
        }
        
        colorFlag = ofRandom(0, 3);
        if (colorFlag == prevColorFlag) {
            colorFlag++;
            if (colorFlag >= 3) {
                colorFlag -= 2;
            }
        }
        
        switch (colorFlag) {
            case 0:
                bandR[i] = 0;
                bandG[i] = 255;
                bandB[i] = 255;
                break;
                
            case 1:
                bandR[i] = 255;
                bandG[i] = 0;
                bandB[i] = 255;
                break;
                
            case 2:
                bandR[i] = 255;
                bandG[i] = 212;
                bandB[i] = 0;
                break;
        }
    }
}

//--------------------------------------------------------------
void PizzaStripe::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < 5; i++) {
            if (colorFlag != -1) {
                prevColorFlag = colorFlag;
            }
            
            colorFlag = ofRandom(0, 3);
            if (colorFlag == prevColorFlag) {
                colorFlag++;
                if (colorFlag >= 3) {
                    colorFlag -= 2;
                }
            }
            
            switch (colorFlag) {
                case 0:
                    bandR[i] = 0;
                    bandG[i] = 255;
                    bandB[i] = 255;
                    break;
                    
                case 1:
                    bandR[i] = 255;
                    bandG[i] = 0;
                    bandB[i] = 255;
                    break;
                    
                case 2:
                    bandR[i] = 255;
                    bandG[i] = 212;
                    bandB[i] = 0;
                    break;
            }
        }
    }
}

//--------------------------------------------------------------
void PizzaStripe::draw(){
    for (int i = 0; i < 5; i++) {
        ofSetColor(bandR[i], bandG[i], bandB[i]);
        ofRect(width * i, 0, width, ofGetHeight());
    }
}
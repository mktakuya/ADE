#include "TrianglesOnLines.h"

//--------------------------------------------------------------
void TrianglesOnLines::setup(){
    frame = 0;
    space = 120;
    
    for (int i = 0; i < TRIANGLE_NUM; i++) {
        colorFlag[i] = ofRandom(0, 3);
        
        triangleX[i] = space * ofRandom(13);
        triangleY[i] = ofRandom(ofGetHeight());
        
        switch (colorFlag[i]) {
            case 0:
                triangleR[i] = 0;
                triangleG[i] = 255;
                triangleB[i] = 255;
                break;
                
            case 1:
                triangleR[i] = 255;
                triangleG[i] = 0;
                triangleB[i] = 255;
                break;
                
            case 2:
                triangleR[i] = 255;
                triangleG[i] = 212;
                triangleB[i] = 0;
                break;
        }
    }
}

//--------------------------------------------------------------
void TrianglesOnLines::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < TRIANGLE_NUM; i++) {
            colorFlag[i] = ofRandom(0, 3);
            
            triangleX[i] = space * ofRandom(13);
            triangleY[i] = ofRandom(ofGetHeight());
                
            switch (colorFlag[i]) {
                case 0:
                    triangleR[i] = 0;
                    triangleG[i] = 255;
                    triangleB[i] = 255;
                    break;
                    
                case 1:
                    triangleR[i] = 255;
                    triangleG[i] = 0;
                    triangleB[i] = 255;
                    break;
                    
                case 2:
                    triangleR[i] = 255;
                    triangleG[i] = 212;
                    triangleB[i] = 0;
                    break;
            }
        }
    }
}

//--------------------------------------------------------------
void TrianglesOnLines::draw(){
    for (int i = 0; i < 12; i++) {
        ofSetColor(128);
        ofSetLineWidth(3);
        ofLine(space * i, 0, space * i, ofGetHeight());
    }
    
    for (int i = 0; i < TRIANGLE_NUM; i++) {
        ofSetColor(triangleR[i], triangleG[i], triangleB[i], 128);
        ofCircle(triangleX[i], triangleY[i], 60);
    }
}
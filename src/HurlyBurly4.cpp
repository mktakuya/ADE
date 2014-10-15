#include "HurlyBurly4.h"

//--------------------------------------------------------------
void HurlyBurly4::setup(){
    
    frame = 0;
    
    fontWidth = 600;
    fontHeight = 120;
    for (int i  = 0; i < FONTS_LINE; i++) {
        for (int j = 0; j < FONTS_COLUMN; j++) {
            fonts[i][j].loadFont("hiragino.otf", 60);
            colorFlag[i][j] = ofRandom(0, 3);
            
            switch (colorFlag[i][j]) {
                case 0:
                    fontR[i][j] = 0;
                    fontG[i][j] = 255;
                    fontB[i][j] = 255;
                    break;
                    
                case 1:
                    fontR[i][j] = 255;
                    fontG[i][j] = 0;
                    fontB[i][j] = 255;
                    break;
                    
                case 2:
                    fontR[i][j] = 255;
                    fontG[i][j] = 212;
                    fontB[i][j] = 0;
                    break;
            }
            fontX[i][j] = 10 * j + j * fontWidth;
            fontY[i][j] = 10 * i + i * fontHeight;
        }
    }
}

//--------------------------------------------------------------
void HurlyBurly4::update(){
    frame++;
    if (frame % 15 == 0) {
        for (int i = 0; i < FONTS_LINE; i++) {
            for (int j = 0; j < FONTS_COLUMN; j++) {
                colorFlag[i][j] = ofRandom(0, 3);
                
                switch (colorFlag[i][j]) {
                    case 0:
                        fontR[i][j] = 0;
                        fontG[i][j] = 255;
                        fontB[i][j] = 255;
                        break;
                        
                    case 1:
                        fontR[i][j] = 255;
                        fontG[i][j] = 0;
                        fontB[i][j] = 255;
                        break;
                        
                    case 2:
                        fontR[i][j] = 255;
                        fontG[i][j] = 212;
                        fontB[i][j] = 0;
                        break;
                }
                fontX[i][j] = 10 * j + j * fontWidth;
                fontY[i][j] = 10 * i + i * fontHeight;
            }
        }
    }
}

//--------------------------------------------------------------
void HurlyBurly4::draw(){
    for (int i = 0; i < FONTS_LINE; i++) {
        for (int j = 0; j < FONTS_COLUMN; j++) {
            ofSetColor(fontR[i][j], fontG[i][j], fontB[i][j]);
            fonts[i][j].drawString("Hurly Burly", fontX[i][j], fontY[i][j]);
        }
    }
}

//--------------------------------------------------------------
void HurlyBurly4::keyPressed(int key){

}

//--------------------------------------------------------------
void HurlyBurly4::keyReleased(int key){

}

//--------------------------------------------------------------
void HurlyBurly4::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void HurlyBurly4::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly4::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly4::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly4::windowResized(int w, int h){

}

//--------------------------------------------------------------
void HurlyBurly4::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void HurlyBurly4::dragEvent(ofDragInfo dragInfo){ 

}

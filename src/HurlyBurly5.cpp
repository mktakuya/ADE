#include "HurlyBurly5.h"

//--------------------------------------------------------------
void HurlyBurly5::setup(){
    font.loadFont("hiragino.otf", 200);

    frame = 0;
    colorFlag = true;
}

//--------------------------------------------------------------
void HurlyBurly5::update(){
    frame++;
    
    if (frame % 15 == 0){
        colorFlag = !colorFlag;
    }
}

//--------------------------------------------------------------
void HurlyBurly5::draw(){
    if (colorFlag == false) {
        ofSetColor(0);
    } else {
        ofSetColor(255);
    }
    font.drawString("PARTY", ofGetWidth() / 2 - font.stringWidth("PARTY") / 2, ofGetHeight() / 2);
}

//--------------------------------------------------------------
void HurlyBurly5::keyPressed(int key){

}

//--------------------------------------------------------------
void HurlyBurly5::keyReleased(int key){

}

//--------------------------------------------------------------
void HurlyBurly5::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void HurlyBurly5::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly5::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly5::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly5::windowResized(int w, int h){

}

//--------------------------------------------------------------
void HurlyBurly5::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void HurlyBurly5::dragEvent(ofDragInfo dragInfo){ 

}

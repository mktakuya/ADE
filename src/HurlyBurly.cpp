#include "HurlyBurly.h"

//--------------------------------------------------------------
void HurlyBurly::setup(){
    fontColorFlag = 0;
    ofBackground(0);
    ofSetFullscreen(true);
    font.loadFont("hiragino.otf", 120);
}

//--------------------------------------------------------------
void HurlyBurly::update(){

}

//--------------------------------------------------------------
void HurlyBurly::draw(){
    if (fontColorFlag == 0) {
        ofBackground(0);
        ofSetColor(255);
        font.drawString("Hurly Burly", 40, 150);
    }else {
        ofBackground(255);
        ofSetColor(0);
        font.drawString("Hurly Burly", 40, 150);
    }
}

//--------------------------------------------------------------
void HurlyBurly::keyPressed(int key){
}

//--------------------------------------------------------------
void HurlyBurly::keyReleased(int key){

}

//--------------------------------------------------------------
void HurlyBurly::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void HurlyBurly::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void HurlyBurly::windowResized(int w, int h){

}

//--------------------------------------------------------------
void HurlyBurly::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void HurlyBurly::dragEvent(ofDragInfo dragInfo){ 

}

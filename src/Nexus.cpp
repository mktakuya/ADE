#include "Nexus.h"

//--------------------------------------------------------------
void Nexus::setup(){
	for (int i = 0; i < 50; i++) {
		position[i].set(ofGetWidth() * 1.5 - (25 - i) * 100, ofGetHeight() / 2.0);
	}
	
}

//--------------------------------------------------------------
void Nexus::update(){
	
	for (int i = 0; i < 50; i++) {
		if (position[i].x <= 0) {
			position[i].x = ofGetWidth() * 2;
		}

		else {
			position[i].x -= 10;
		}
	}

}

//--------------------------------------------------------------
void Nexus::draw(){

	ofColor colorParam[3];
	colorParam[0].r = 250; colorParam[0].g = 0; colorParam[0].b= 191;
	colorParam[1].r = 255; colorParam[1].g = 206; colorParam[1].b= 10;
	colorParam[2].r = 20; colorParam[2].g = 246; colorParam[2].b= 255;

	for (int i = 0; i < 50; i++) {
		if (i % 2 == 0) {
			ofSetColor(255);
		}
		else {
			ofSetColor(colorParam[i % 3]);
		}
		ofCircle(position[i], ofGetHeight());
	}
}

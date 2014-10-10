#include "Wave.h"

//--------------------------------------------------------------
void Wave::setup(){

	ofEnableSmoothing();
	ofBackground(255);
	ofSetcircleResolution(128);

	x = ofGetWidth() / 2.0;
	y = ofGetHeight() / 2.0;
	for (int i = 0; i < circle; i++) {
		diameter[i] = 10;
		dia_coefficient[i] = ofRandom(2, 6);
		diff[i] = ofRandom(20, 50);
	}

}

//--------------------------------------------------------------
void Wave::update(){

	for (int i = 0; i < circle; i++) {
		if (diameter[i] >= max_dia) {
			diameter[i] = 10;
			dia_coefficient[i] = ofRandom(2, 6);
			diff[i] = ofRandom(20, 50);
		}
		else {
			diameter[i] += dia_coefficient[i];
		}
	}

}

//--------------------------------------------------------------
void Wave::draw(){

	for (int i = 0; i < circle; i++) {
		ofSetColor(0);
		ofNoFill();
		ofSetLineWidth(20);	
		ofCircle(x, y, diameter[i]);
	}

}

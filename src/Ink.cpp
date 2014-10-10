#include "Ink.h"

//--------------------------------------------------------------
void Ink::setup(){

	ofEnableSmoothing();
	ofSetCircleResolution(64);
	ofBackground(0);
	c = circleDiam;
	circles = 0;
	d = 0.1;
	for (int i = 0; i < 1000; i++) {
		circleDiam[i] = ofRandom(20, 200);
		circlePosition[i].set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
	}

}

//--------------------------------------------------------------
void Ink::update(){

	circles += d;
	d += 0.01;

}

//--------------------------------------------------------------
void Ink::draw(){

	for (int i = 0; i < (int)circles; i++) {
        ofSetColor(255);
		ofCircle(circlePosition[i], circleDiam[i]);
	}

}

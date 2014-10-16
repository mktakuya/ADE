#include "Trink.h"

//--------------------------------------------------------------
void Trink::setup(){

	ofEnableSmoothing();
	ofSetCircleResolution(3);
	ofBackground(255);
	c = circleDiam;
	circles = 0;
	d = 0.1;
	for (int i = 0; i < 1000; i++) {
		circleDiam[i] = ofRandom(70, 300);
		circlePosition[i].set(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
		deg[i] = ofRandom(0, 270);
	}

}

//--------------------------------------------------------------
void Trink::update(){

	circles += d;
	d += 0.01;

}

//--------------------------------------------------------------
void Trink::draw(){

	ofSetColor(0);
	for (int i = 0; i < (int)circles; i++) {
		ofPushMatrix();
		ofTranslate(circlePosition[i]);
		ofRotateZ(deg[i]);
		ofCircle(0, 0, circleDiam[i]);
		ofPopMatrix();
	}

}

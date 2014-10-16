#include "TriForce.h"

//--------------------------------------------------------------
void TriForce::setup(){

	ofSetCircleResolution(3);
	ofEnableSmoothing();
	ofBackground(0);

	drawFlag = 0;
}

//--------------------------------------------------------------
void TriForce::update(){

	if (drawFlag == 1) {
		drawFlag = 0;
	}
	else {
		drawFlag = 1;
	}

}

//--------------------------------------------------------------
void TriForce::draw(){

	ofSetColor(255);
	ofTriangle(ofGetWidth() * 0.5, 0, ofGetWidth() * 0.2, ofGetHeight(), ofGetWidth() * 0.8 , ofGetHeight());

	if (drawFlag == 1)	{
		ofSetColor(252, 124, 5);
		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0 - 30);
		ofRotateZ(90);
		ofCircle(0, 0, 165);
		ofPopMatrix();

		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0 - 140, (ofGetHeight() / 6.0) * 5 - 25);
		ofRotateZ(90);
		ofCircle(0, 0, 165);
		ofPopMatrix();

		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0 + 140, (ofGetHeight() / 6.0) * 5 -25);
		ofRotateZ(90);
		ofCircle(0, 0, 165);
		ofPopMatrix();
	}

	ofSleepMillis(500);

}

#include "TriForce.h"

//--------------------------------------------------------------
void TriForce::setup(){
	drawFlag = 0;
    radius = 215;
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
	ofTriangle(ofGetWidth() * 0.5, 0, ofGetWidth() * 0.1, ofGetHeight(), ofGetWidth() * 0.9 , ofGetHeight());

	if (drawFlag == 1)	{
		ofSetColor(252, 124, 5);
		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0 - 50);
		ofRotateZ(90);
		ofCircle(0, 0, radius);
		ofPopMatrix();

		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0 - 200, (ofGetHeight() / 6.0) * 5 - 25);
		ofRotateZ(90);
		ofCircle(0, 0, radius);
		ofPopMatrix();

		ofPushMatrix();
		ofTranslate(ofGetWidth() / 2.0 + 200, (ofGetHeight() / 6.0) * 5 -25);
		ofRotateZ(90);
		ofCircle(0, 0, radius);
		ofPopMatrix();
	}

	ofSleepMillis(500);

}

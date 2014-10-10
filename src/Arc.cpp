#include "ofApp.h"


//--------------------------------------------------------------
void Arc::setup(){

	ofEnableSmoothing();
	ofSetCircleResolution(64);
	radian = 300;
	renge = 100;
	max_arc = 5;
	for (int i = 0; i < max_arc; i++)
		rad[i] = 30 * i;

}

//--------------------------------------------------------------
void Arc::update(){
	for (int i = 0; i < max_arc; i++) {
		rad[i]++;
		if (rad[i] >= 360) {
			rad[i] = 0;
		}
	}

}

//--------------------------------------------------------------
void Arc::draw(){

	ofColor purple;
	purple.r = 232; purple.g = 86; purple.b = 239;

	ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);
	for (int i = 0; i < max_arc; i++){
		if (i == 3)
			ofSetColor(purple);
		else
			ofSetColor(255);
		ofRotateZ(rad[i]);
		for (int j = 0; j < radian; j++) {
			ofPushMatrix();
			ofRotateZ(j);
			ofCircle(renge + i * 70, 0, 8);
			ofPopMatrix();
		}
	}
}

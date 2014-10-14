#include "Stripe2.h"

//--------------------------------------------------------------
void Stripe2::setup(){

	ofEnableSmoothing();
	ofBackground(255);
	ofSetFrameRate(50);

	rotateFlag = true;
	degree = 0;
	colorType = 0;

}

//--------------------------------------------------------------
void Stripe2::update(){

	if (degree >= 180) {
		if(colorType == 3) {
			colorType = 0;
		}
		else {
			colorType += 1;
		}
		degree = 0;
	}
	degree += 4;

}

//--------------------------------------------------------------
void Stripe2::draw(){
	float color[4][3] = {{127, 177, 201}, {255, 210, 92}, {202, 228, 79}, {255, 195, 89}};

	if (rotateFlag == false) {
		for (int i = 0; i < ofGetWidth() / 60; i++){
			if ((i + colorType)%2 != 0) 
				ofSetColor(color[colorType][0], color[colorType][1], color[colorType][2]);
			else 
				ofSetColor(255);
			ofRect(i * 60, 0, 60, ofGetHeight());
		}
		ofSleepMillis(500);
	}

	else {
		for (int i = 0; i < ofGetWidth() / 60; i++) {
			if ((i + colorType)%2 != 0) 
				ofSetColor(color[colorType][0], color[colorType][1], color[colorType][2]);
			else 
				ofSetColor(255);
			ofPushMatrix();
			ofTranslate(i * 60 - 30, 0);
			ofRotateY(degree);
			ofRect(-30, 0, 60, ofGetHeight());
			ofPopMatrix();
		}
	}
}

#include "Hexagon.h"
// Prototype Color
//--------------------------------------------------------------
void Hexagon::setup(){
	ofBackground(255);
	ofSetCircleResolution(6);
	ofEnableSmoothing();

	for (int i = 0; i< 3; i++) {
		radius[i] = 120 + i * 300;
		omega[i] = 1.0 + i * 0.5;
	}
}

//--------------------------------------------------------------
void Hexagon::update(){
	for(int i = 0; i < 3; i++) {
		omega[i] += 0.5 * rotation(i + 1);
	}
}

//--------------------------------------------------------------
void Hexagon::draw(){
	float colorparam[3][3] = {{60, 60, 60}, {120, 120, 120}, {180, 180, 180}};

	ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);
	for (int i = 2; i >= 0; i--) {
		ofPushMatrix();
		ofRotateZ(omega[i]);
		ofSetColor(colorparam[i][0], colorparam[i][1], colorparam[i][2]);
		ofCircle(0, 0, radius[i]);
		ofPopMatrix();
	}
}

int Hexagon::rotation(int times) {
	int rotate = 1;
	for (int i = 1; i < times; i++){
		rotate *= -1;
	}

	return rotate;
}

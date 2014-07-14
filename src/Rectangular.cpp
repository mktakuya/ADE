#include "Rectangular.h"

#define NUM 10
#define FPS 0.02

ofBoxPrimitive box;

bool hide_black;
bool hide_white;

float sec;
float colorparam[3][3] = { {255, 0, 248}, {0, 85, 255}, {250, 255, 0} };
float height[NUM];

int limits[NUM + 1] = {0};
int ypoint[NUM];
int xpoint[NUM];

//--------------------------------------------------------------
void Rectangular::setup(){

	ofBackground(255);
	ofSetFrameRate(50);
	ofEnableSmoothing();
	
	sec = 0;
	hide_black = false;
	hide_white = false;
	limits[0] = 0;

	for (int i = 0; i < NUM; i++) {
		limits[i + 1] = 150 * i + 150;
		xpoint[i] = ofRandom(limits[i] + 40, limits[i + 1] - 40);
		height[i] = ofRandom(-10, -4);
		ypoint[i] = ofGetHeight() - ofRandom(200, 500);
	}

}

//--------------------------------------------------------------
void Rectangular::update(){

	sec += FPS;
	if (sec >= 1.0) {
		hide_white = true;
		if (sec >= 2.0) {
			hide_white = false;
			if (sec >= 3.0) {
				hide_black = true;
				if (sec >= 4.0) {
					hide_black = false;
					if (sec >= 5.0) {
						 hide_black = true;
						 hide_white = true;
						 if (sec >= 6.0) { 
						 	hide_white = false;
						 	hide_black = false; 
						 	sec = 0;
						 }
					}
				}
			}
		}
	}

	for (int i = 0; i < NUM; i++) {
		if (ypoint[i] <= -80) {
			ypoint[i] = ofGetHeight() + 120;
			height[i] = ofRandom(- 10, -4);
			xpoint[i] = ofRandom(limits[i], limits[i + 1]);
		}
		else {
			ypoint[i] += height[i];
		}
	}

}

//--------------------------------------------------------------
void Rectangular::draw(){

	for (int i = 0; i < NUM ; i++) {
		for (int j = 0; j < 4; j++) {
			box.set(40);
			box.setPosition(xpoint[i], ypoint[i] + j * -30, 0);
			ofSetColor(colorparam[i%3][0], colorparam[i%3][1], colorparam[i%3][2]);
			box.draw();
			ofSetLineWidth(0.5);
			ofSetColor(0);
			box.drawWireframe();
		}
	}

	if (hide_white == true) {
		ofSetColor(255);
		ofFill();
		ofBeginShape();
			ofVertex(0, 0);
			ofVertex(ofGetWidth() / 2.0 - 120, 0);
			ofVertex(ofGetWidth() / 2.0 + 120, ofGetHeight());
			ofVertex(0, ofGetHeight());
		ofEndShape();
	}

	if (hide_black == true) {
		ofSetColor(0);
		ofFill();
		ofBeginShape();
			ofVertex(ofGetWidth() / 2.0 - 120, 0);
			ofVertex(ofGetWidth(), 0);
			ofVertex(ofGetWidth(), ofGetHeight());
			ofVertex(ofGetWidth() / 2.0 + 120, ofGetHeight());
		ofEndShape();
	}

}

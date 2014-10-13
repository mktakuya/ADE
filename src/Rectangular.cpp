#include "Rectangular.h"

//--------------------------------------------------------------
void Rectangular::setup(){

	ofBackground(30);
	ofEnableSmoothing();

	for(int i = 0; i < 11; i++) {
		limits[i] = 0;
	}

	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < 2; j++) {
			limits[i + 1] = 150 * i + 150;
			xpoint[i] = ofRandom(limits[i] + 40, limits[i + 1] - 40);
			height[i] = ofRandom(-30, -15);
			ypoint[i][j] = ofGetHeight() - ofRandom(200, 500) + j * 400;
		}
	}

}

//--------------------------------------------------------------
void Rectangular::update(){

	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < 2; j++) {
			if (ypoint[i][j] <= -80 - j * 400) {
				ypoint[i][j] = ofGetHeight() + 30 * 6 + j * 400;
				height[i] = ofRandom(- 30, -15);
				if (j == 1)
					xpoint[i] = ofRandom(limits[i], limits[i + 1]);
			}
			else {
				ypoint[i][j] += height[i];
			}
		}
	}

}

//--------------------------------------------------------------
void Rectangular::draw(){

	ofColor color[3];
	color[0].r = 255; color[1].r = 0; color[2].r = 250;
	color[0].g = 0; color[1].g = 85; color[2].g = 255;
	color[0].b = 248; color[1].b = 255; color[2].b = 0;

	for (int i = 0; i < NUM ; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 2; k++) {
				box.set(40);
				box.setPosition(xpoint[i], ypoint[i][k] + j * (-30), 0);
				ofSetColor(color[i % 3]);
				box.draw();
				ofSetLineWidth(0.5);
				ofSetColor(0);
				box.drawWireframe();
			}
		}
	}

}

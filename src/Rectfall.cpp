#include "Rectfall.h"

//--------------------------------------------------------------
void Rectfall::setup(){

	fall = false;

	colors[0].r = 255; colors[0].g = 255; colors[0].b = 10;
	colors[1].r = 20;	 colors[1].g = 246; colors[1].b = 255;
	colors[2].r = 250; colors[2].g = 0; 	   colors[2].b = 191;

	length = ofGetWidth() / 4.0;
	height = ofGetHeight() * 0.15;
	radius = 80;
	ofBackground(0);
	for (int i = 0; i < 3; i++) {
		triangleDegree[i] = 90;
		rectcolorNum[i] = i;
		trianglecolorNum[i] = i;

	}

}

//--------------------------------------------------------------
void Rectfall::update(){

	for(int i = 0; i < 3; i++){
		triangleDegree[i]+=1.5;
		if (triangleDegree[i] >= 360) {
			switch(rectcolorNum[i]) {
			case 0:
			case 1:
				rectcolorNum[i]++;
				break;

			case 2:
				rectcolorNum[i] = 0;
				break;
			}
			triangleDegree[i] = 0;
			fall = true;
		}
	}

	if (fall == true) {
		if (height >= ofGetHeight() * 0.75){
			fall = false;
			height =  ofGetHeight() * 0.15;
			radius = 80;
			for (int i = 0; i < 3; i++){
				trianglecolorNum[i] = rectcolorNum[i];
			}
		}
		height += 10;
		radius -= 1;
	}

}

//--------------------------------------------------------------
void Rectfall::draw(){

	float colorparam[3][3] = { {255, 255, 10}, {20, 246, 255}, {250, 0, 191} };

	for (int i = 0; i < 3; i++) {
		ofPushMatrix();
		ofTranslate(length + length * i + 1, ofGetHeight() * 0.15);
		ofRotateZ(45);
		ofSetCircleResolution(4);
		ofSetColor(colors[rectcolorNum[i]]);
		ofCircle(0, 0, 80);
		ofPopMatrix();

		if (fall == true) {
			ofSetCircleResolution(4);
			ofSetColor(colors[rectcolorNum[i]]);
			ofCircle(length + length * i + 1, height, radius);
		}
	}


	for(int i = 0; i < 3; i++) {
		ofPushMatrix();
		ofTranslate(length + length * i + 1, ofGetHeight() * 0.75);
		ofRotateZ(-(triangleDegree[i]));
		ofSetCircleResolution(3);
		ofSetColor(colors[trianglecolorNum[i]]);
		ofCircle(0, 0, 120);
		ofPopMatrix();
	}

}

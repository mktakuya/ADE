#include "Rectfall.h"

//--------------------------------------------------------------
void Rectfall::setup(){
	ofEnableSmoothing();

	fall = false;
	colors[0].r = 20;	colors[0].g = 246; colors[0].b = 255;
	colors[1].r = 255; colors[1].g = 255; colors[1].b = 10;
	colors[2].r = 250; colors[2].g = 0; 	   colors[2].b = 191;
	triangle_interval = ofGetWidth() / 4.0;
	triangle_locate_height = ofGetHeight() * 0.15;
	radius = 80;
	for (int i = 0; i < 3; i++) {
		triangleDegree[i] = 90;
		rectcolorNum[i] = i;
		trianglecolorNum[i] = i;
	}

	crystal[0].loadImage("crystal1.png");
	crystal[1].loadImage("crystal2.png");
	crystal[2].loadImage("crystal3.png");

}

//--------------------------------------------------------------
void Rectfall::update(){

	for(int i = 0; i < 3; i++){
		triangleDegree[i] += 1.5;
		if ((int)triangleDegree[i]%90 == 0) {
			switch(rectcolorNum[i]) {
			case 0:
			case 1:
				rectcolorNum[i]++;
				break;

			case 2:
				rectcolorNum[i] = 0;
				break;
			}
			fall = true;
		}
		else if (triangleDegree[i] == 360)
			triangleDegree[i] = 0;
	}

	if (fall == true) {
		if (triangle_locate_height >= ofGetHeight() * 0.65){
			fall = false;
			triangle_locate_height =  ofGetHeight() * 0.15;
			radius = 80;
			for (int i = 0; i < 3; i++){
				trianglecolorNum[i] = rectcolorNum[i];
			}
		}
		triangle_locate_height += 10;
		radius -= 0.5;
	}

}

//--------------------------------------------------------------
void Rectfall::draw(){

	for (int i = 0; i < 3; i++) {
		ofPushMatrix();
		ofTranslate(triangle_interval + triangle_interval * i + 1, ofGetHeight() * 0.15);
		ofRotateZ(45);
		ofSetCircleResolution(4);
		ofSetColor(colors[rectcolorNum[i]]);
		ofCircle(0, 0, 80);
		ofPopMatrix();

		if (fall == true) {
			// ofSetColor(colors[rectcolorNum[i]]);
			// ofCircle(triangle_interval + triangle_interval * i + 1, triangle_locate_height, radius);
			ofSetColor(255);
			crystal[rectcolorNum[i]].draw(triangle_interval + triangle_interval * i + 1 - 50, triangle_locate_height - 50, 100, 100);
		}
	}


	for(int i = 0; i < 3; i++) {
		ofPushMatrix();
		ofTranslate(triangle_interval + triangle_interval * i + 1, ofGetHeight() * 0.65);
		ofRotateZ(-(triangleDegree[i]));
		ofSetCircleResolution(3);
		ofSetColor(colors[trianglecolorNum[i]]);
		ofCircle(0, 0, 120);
		ofPopMatrix();
	}

}

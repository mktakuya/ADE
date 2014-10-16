#include "Visualizer.h"

//--------------------------------------------------------------
void Visualizer::setup(){

	ofEnableAlphaBlending();
	ofEnableSmoothing();

	rect_width = 5;
	rect_interval = 15.0;
	counter = 0;

	for (int i = 1; i <= RECT; i++) {
		randy[i - 1] = ofRandom(0, 1);
		randy[i - 1] += 0.01;
		randx[i - 1] = ofRandom(0, 1);
		randx[i - 1] += 0.01;
		randz[i - 1] = ofRandom(0, 1);
		randz[i - 1] += 0.01;
		pNoise[i - 1] = ofNoise(randx[i - 1], randy[i - 1], randz[i - 1]) * 150;
	}

	for (int i = 0; i < CIRCLE; i++) {
		circlePosition[i].set(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
		circleVec[i].set(ofRandom(-5, 6), ofRandom(-6, 5));
		radius[i] = ofRandom(90, 150);
	}

}

//--------------------------------------------------------------
void Visualizer::update(){

	for (int i = 0; i < CIRCLE; i++) {
		circlePosition[i].x += circleVec[i].x;
		if (circlePosition[i].x <= 0 || circlePosition[i].x >= ofGetWidth())
			circleVec[i].x *= -1;
		circlePosition[i].y += circleVec[i].y;
		if (circlePosition[i].y <= 0 || circlePosition[i].y >= ofGetHeight())
			circleVec[i].y *= -1;
	}

	if (counter >= 25) {
		for (int i = 1; i <= RECT; i++) {
			randy[i - 1] = ofRandom(0, 1);
			randy[i - 1] += 0.001;
			randx[i - 1] = ofRandom(0, 1);
			randx[i - 1] += 0.001;
			randz[i - 1] = ofRandom(0, 1);
			randz[i - 1] += 0.001;
			pNoise[i - 1] = ofSignedNoise(randx[i - 1], randy[i - 1], randz[i - 1]) * 150;
		}
		counter = 0;
	}
	
}

//--------------------------------------------------------------
void Visualizer::draw(){

	// Draw circles
	ofColor colors[3];
	colors[0].r = 255; colors[0].g = 255; colors[0].b = 10;
	colors[1].r = 20;	 colors[1].g = 246; colors[1].b = 255;
	colors[2].r = 250; colors[2].g = 0; 	   colors[2].b = 191;

	for (int i = 0; i < CIRCLE; i++) {
		ofSetColor(colors[i % 3], 128);
		ofCircle(circlePosition[i], radius[i]);
	}

	// Draw rects
	for (int i = 0; i < RECT; i++) {
		ofSetColor(0);
		ofRect(7 + rect_interval * i, ofGetHeight() / 2.0 - pNoise[i] / 2.0, rect_width, pNoise[i]);
	}
	counter++;

}

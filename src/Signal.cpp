#include "Signal.h"

//--------------------------------------------------------------
void Signal::setup(){

	PIECE = 35;
	CLOCK = 300;

	ofBackground(255);
	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetCircleResolution(64);

	ofScale(1, -1);

}

//--------------------------------------------------------------
void Signal::update(){

	for(int i = 0; i < PIECE; i++){
		randy[i] = ofRandom(0, 1);
		randy[i] += 0.01;
		randx[i] = ofRandom(0, 1);
		randx[i] += 0.01;
		randz[i] = ofRandom(0, 1);
		randz[i] += 0.01;

		pNoise[i] = ofNoise(randx[i], randy[i], randz[i]) * 15;
	}

}

//--------------------------------------------------------------
void Signal::draw(){

	for(int i = 0; i < PIECE; i++){
		for(int j = 1; j <= pNoise[i]; j++){
			ofSetColor(0, 0, 0, 200);
			ofFill();
			ofRect(15 + 40 * i, ofGetHeight() - 40 * j, 20, 20);
		}
	}
	ofSleepMillis(CLOCK);

}

#include "Stripe.h"

#define COEF 0.05

float color[150][3];
float diff[150] = {0};
float loc [150] = {0};
float movement[150];

//--------------------------------------------------------------
void Stripe::setup(){

	ofBackground(255);
	ofEnableSmoothing();

	float width = ofGetWidth();
	int i = 0;
	while (width >= 0) {
		for (int cnt = 0; cnt < 3; cnt++) {
			color[i][cnt] = ofRandom(255); //RGB
		}
		diff[i] = ofRandom(40, 70); //dL
		movement[i] = diff[i] * COEF; //dL * COEF = vec(x)
		width -= diff[i];
		for (int j = 0; j < i; j++) {
			loc[i + 1] += diff[j]; //dx
		}

		i++;
	}

}

//--------------------------------------------------------------
void Stripe::update(){

	for (int i = 0; i < 150; i++) {
		if (loc[i] >= ofGetWidth()) {
			loc[i] = diff[i] * -1;
			for (int j = 0; j < 3; j++) {
				color[i][j] = ofRandom(255); // Reset RGB
			}
		}
		else {
			loc[i] += movement[i];
		}
	}

}

//--------------------------------------------------------------
void Stripe::draw(){

	for (int  i = 0; i < 150; i++) {
		ofSetColor(color[i][0], color[i][1], color[i][2]);
		ofFill();
		ofRect(loc[i], 0, diff[i], ofGetHeight());
	}

	//ofSleepMillis(300);
}

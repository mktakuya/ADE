#include "Tricle.h"

//--------------------------------------------------------------
void Tricle::setup(){

	ofSetCircleResolution(3);
	ofEnableSmoothing();

	radian = 0;
	diam = 1;
	renge = 70;

	for (int i = 0; i < 3; i++) {
		point[i].set(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
		vec[i].set(ofRandom(-5, 5), ofRandom(-5, 5));
	}
}

//--------------------------------------------------------------
void Tricle::update(){

	// Circle radius update
	renge += diam;
	if (renge >= 200 || renge <= 70)
		diam *= -1;

	// Circle Radian update 
	radian++;
	if (radian >= 360)
		radian = 0;	

	// Circle Points update 
	for (int i = 0; i < 3; i++) {
		if (point[i].x >= ofGetWidth()){
			vec[i].x = ofRandom(-5, -1);
		}
		else if (point[i].x <= 0) {
			vec[i].x = ofRandom(1, 5);
		}
		if (point[i].y >= ofGetHeight()){
			vec[i].y = ofRandom(-5, -1);
		}
		else if (point[i].y <= 0) {
			vec[i].y = ofRandom(1, 5);
		}

		point[i].x += vec[i].x;
		point[i].y += vec[i].y;
	}

}

//--------------------------------------------------------------
void Tricle::draw(){

	for (int i = 0; i < 3; i++)	{
		ofPushMatrix();
		ofTranslate(point[i]);
		ofRotateZ(radian);
		for (int i = 0; i < 360 / 30; i++) {
			if (i == (360 / 30) / 2)
				ofSetColor(232, 86, 239);
			else
				ofSetColor(255);

			ofPushMatrix();
			ofRotateZ(i * 30);
			ofCircle(renge, 0, 12);
			ofPopMatrix();
		}
		ofPopMatrix();
	}

}

#include "LiveStage.h"

//--------------------------------------------------------------
void LiveStage::setup(){

	ofEnableSmoothing();
	ofSetCircleResolution(64);
	ofBackground(120, 120, 120);

	timer = 0;

	for (int i = 0; i < PENLIGHT; i++) {
		RightPenLight[i].x = ofRandom(50, ofGetWidth() * 0.3);
		RightPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
		LeftPenLight[i].x = ofRandom(ofGetWidth() * 0.7, ofGetWidth() - 50);
		LeftPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
	}

	for (int i = 0; i < CIRCLES; i++){
		Particlepoint[i].x = ofRandom(ofGetWidth() * 0.45, ofGetWidth() * 0.5);
		Particlepoint[i].y = ofRandom(DIAM, ofGetHeight() * 0.25);
		Particlevec[i].x = ofRandom(-5, 5);
		Particlevec[i].y = ofRandom(-6, 6);
	}

}

//--------------------------------------------------------------
void LiveStage::update(){

	for (int i = 0; i < CIRCLES; i++) {
		Particlepoint[i].x += Particlevec[i].x;
		if (Particlepoint[i].x + DIAM >= ofGetWidth() * 0.7 || Particlepoint[i].x - DIAM <= ofGetWidth() * 0.3)
			Particlevec[i].x *= -1;
		Particlepoint[i].y += Particlevec[i].y;
		if (Particlepoint[i].y + DIAM >= ofGetHeight() * 0.3 || Particlepoint[i].y - DIAM <= 0)
			Particlevec[i].y *= -1;
	}

	if (timer >= 0.3) {
		for (int i = 0; i < PENLIGHT; i++) {
			RightPenLight[i].x = ofRandom(50, ofGetWidth() * 0.3);
			RightPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
			LeftPenLight[i].x = ofRandom(ofGetWidth() * 0.7, ofGetWidth() - 50);
			LeftPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
		}
		timer = 0;
	}
	
}

//--------------------------------------------------------------
void LiveStage::draw(){

	ofColor colors[3];
	colors[0].r = 255; colors[0].g = 255; colors[0].b = 10;
	colors[1].r = 20;	 colors[1].g = 246; colors[1].b = 255;
	colors[2].r = 250; colors[2].g = 0; 	   colors[2].b = 191;

	ofNoFill();
		ofSetColor(255);
		ofSetLineWidth(3);
		ofRect(ofGetWidth() * 0.3, 0, ofGetWidth() * 0.4, ofGetHeight() * 0.3);
		ofLine(0, ofGetHeight() * 0.45, ofGetWidth(), ofGetHeight() * 0.45);
		ofBeginShape();
			ofVertex(0, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.4, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.3, ofGetHeight());
			ofVertex(0, ofGetHeight());
		ofEndShape();
		ofBeginShape();
			ofVertex(ofGetWidth(), ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.6, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.7, ofGetHeight());
			ofVertex(ofGetWidth(), ofGetHeight());
		ofEndShape();

	ofFill();
		for (int i = 0; i < CIRCLES; i++) {
			ofSetColor(colors[i % 3]);
			ofCircle(Particlepoint[i], DIAM);
		}

		for (int i = 0; i < PENLIGHT; i++) {
			ofSetColor(colors[i % 3]);
			ofRect(RightPenLight[i], 10, 30);
			ofRect(LeftPenLight[i], 10, 30);
		}
		timer += 0.01;

}

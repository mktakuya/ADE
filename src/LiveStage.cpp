#include "LiveStage.h"

//--------------------------------------------------------------
void LiveStage::setup(){

	ofEnableSmoothing();
	ofSetCircleResolution(64);
	ofBackground(120, 120, 120);
	ofEnableAlphaBlending();

	timer = 0;
	colorType = 0;

	for (int i = 0; i < PENLIGHT; i++) {
		RightPenLight[i].x = ofRandom(0, ofGetWidth() * 0.3 - 75);
		RightPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
		LeftPenLight[i].x = ofRandom(ofGetWidth() * 0.7 + 75, ofGetWidth() - 25);
		LeftPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
	}

}

//--------------------------------------------------------------
void LiveStage::update(){

	if (timer >= 0.2) {
		for (int i = 0; i < PENLIGHT; i++) {
			RightPenLight[i].x = ofRandom(0, ofGetWidth() * 0.3 - 75);
			RightPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
			LeftPenLight[i].x = ofRandom(ofGetWidth() * 0.7 + 75, ofGetWidth() - 25);
			LeftPenLight[i].y = ofRandom(ofGetHeight() * 0.6, ofGetHeight() - 50);
		}

		if (colorType == 3) { 
			colorType = 0;
		}
		else {
			colorType++;
		}
		
		timer = 0;
	}

}

//--------------------------------------------------------------
void LiveStage::draw(){

	ofColor stripeColor[4];
	stripeColor[0].r = 127; stripeColor[0].g = 177; stripeColor[0].b = 201;
	stripeColor[1].r = 255; stripeColor[1].g = 210; stripeColor[1].b = 92;
	stripeColor[2].r = 202; stripeColor[2].g = 228; stripeColor[2].b = 79;
	stripeColor[3].r = 255; stripeColor[3].g = 195; stripeColor[3].b = 89;

	ofColor colors[3];
	colors[0].r = 255; colors[0].g = 255; colors[0].b = 10;
	colors[1].r = 20;	 colors[1].g = 246; colors[1].b = 255;
	colors[2].r = 250; colors[2].g = 0; 	   colors[2].b = 191;


	ofNoFill();
		ofSetColor(255);
		ofSetLineWidth(3);
		// ofRect(ofGetWidth() * 0.3, 0, ofGetWidth() * 0.4, ofGetHeight() * 0.3);
		ofLine(0, ofGetHeight() * 0.45, ofGetWidth(), ofGetHeight() * 0.45);
		ofBeginShape();
			ofVertex(0, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.4 - 100, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.3 - 100, ofGetHeight());
			ofVertex(0, ofGetHeight());
		ofEndShape();
		ofBeginShape();
			ofVertex(ofGetWidth(), ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.6 + 100, ofGetHeight() * 0.6);
			ofVertex(ofGetWidth() * 0.7 + 100, ofGetHeight());
			ofVertex(ofGetWidth(), ofGetHeight());
		ofEndShape();

	ofFill();
		for (int i = 0; i < ofGetWidth() * 0.1 * 0.2 - 1; i++){
			if ((i + colorType)%2 != 0) 
				ofSetColor(stripeColor[colorType]);
			else 
				ofSetColor(255);
			ofRect(i * 20 + ofGetWidth() * 0.3, 0, 20, ofGetHeight() * 0.3);
		}

		for (int i = 0; i < PENLIGHT; i++) {
			ofSetColor(colors[i % 3]);
			ofRect(RightPenLight[i], 10, 30);
			ofRect(LeftPenLight[i], 10, 30);
		}
		timer += 0.01;
		ofSetColor(255, 255, 255, 80);
		ofCircle(ofGetWidth() / 2.0, ofGetHeight() / 1.5, 230);

}

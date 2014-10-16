#include "Ending.h"

//--------------------------------------------------------------
void Ending::setup(){

	ofSetCircleResolution(3);
	ofEnableSmoothing();
	ofBackground(255);

	for (int i = 0; i < 3; i++) {
		degree[i] = ofRandom(0, 90);
		degdeg[i] = ofRandom(0.1, 1) ;
	}

	font.loadFont("hiragino.otf", 30);

}

//--------------------------------------------------------------
void Ending::update(){

	for (int i = 0; i < 3; i++) {
		degree[i] += degdeg[i];
	}

}

//--------------------------------------------------------------
void Ending::draw(){

	ofPushMatrix();
	ofTranslate(ofGetWidth() / 4.0, ofGetHeight() / 2.0);
	for (int i = 0; i < 3; i++) {
		ofPushMatrix();
		ofRotateZ(degree[i]);
		ofNoFill();
		ofSetLineWidth(10);
		ofSetColor(30 + 60 * i);
		ofCircle(0, 0, 80 + i * 130);
		ofPopMatrix();
	}
	ofPopMatrix();

	ofFill();
	ofSetColor(0);
	ofRect(ofGetWidth() / 2.0, 0, ofGetWidth() / 2.0, ofGetHeight());
	ofSetColor(255);
	font.drawString("Developer", ofGetWidth() / 2.0 + 30, 50);
	font.drawString("Takuya Mukohira", ofGetWidth() / 2.0 + 80, 120);
	font.drawString("Toshiaki Seino", ofGetWidth() / 2.0 + 80, 190);
	font.drawString("Illustration", ofGetWidth() / 2.0 + 30, 280);
	font.drawString("Kaho Ashizawa", ofGetWidth() / 2.0 + 80, 350);
	font.drawString("Dancer", ofGetWidth() / 2.0 + 30,440);
	font.drawString("Ayane Nakamura", ofGetWidth() / 2.0 + 80, 510);
	font.drawString("Kaede Satoh", ofGetWidth() / 2.0 + 80, 580);
	font.drawString("Rikako Uchiyama", ofGetWidth() / 2.0 + 80, 650);

}

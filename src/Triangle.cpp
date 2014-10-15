#include "Triangle.h"

//--------------------------------------------------------------
void Triangle::setup(){
	ofBackground(0);
	ofEnableAlphaBlending();
	ofEnableSmoothing();
	//friction = 0.99;

	for(int cnt = 0; cnt < pieces; cnt++){
		x = ofRandom(-450, 450);
		y = ofRandom(-350, 350);
		for(int ct = 0; ct < 3; ct++){
			TrianglePositionVector[cnt][ct].x = ofRandom(xboader, ofGetWidth() - xboader) + x;
			TrianglePositionVector[cnt][ct].y = ofRandom(yboader, ofGetHeight() - yboader) + y;
			TriangleDirectionVector[cnt].x = ofRandom(-0.5, 0.5);
			TriangleDirectionVector[cnt].y = ofRandom(-0.5, 0.5);
			pattern[cnt] = ofRandom(0, 2);
			alpha[cnt] = ofRandom(45, 127);
		}
	}
}

//--------------------------------------------------------------
void Triangle::update(){
	for (int i = 0; i < pieces; i++){
		//TriangleDirectionVector[i].x *= friction;
		//TriangleDirectionVector[i].y *= friction;
		for(int j = 0; j < 3; j++){
			TrianglePositionVector[i][j].x += TriangleDirectionVector[i].x;
			TrianglePositionVector[i][j].y += TriangleDirectionVector[i].y;

			if (TrianglePositionVector[i].x > ofGetWidth() || TrianglePositionVector[i].x < 0) 
				TriangleDirectionVector[i].x *= -1;
			if (TrianglePositionVector[i].y > ofGetHeight() || TrianglePositionVector[i].y < 0)
				TriangleDirectionVector[i].y *= -1;
		}
	}
}

//--------------------------------------------------------------
void Triangle::draw(){
	for (int i = 0; i < pieces; i++){
		ofPushMatrix();
		ofTranslate(TriangleDirectionVector[i].x, TriangleDirectionVector[i].y);
		switch(pattern[i]) {
			case 0:
				ofSetColor(grays[i % 4]);
				ofNoFill();
				ofSetLineWidth(outline);
				break;

			case 1:
				ofSetColor(grays[i % 4]);
				ofFill();
				break;
		}
		ofTriangle(TrianglePositionVector[i][0], TrianglePositionVector[i][1], TrianglePositionVector[i][2]);
		ofPopMatrix();
	}
}

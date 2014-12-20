#include "Gravity.h"

//--------------------------------------------------------------
void Gravity::setup(){

	ofBackground(100);

	outline = 2.5;
	pieces = 120;
	yboader = 300;
	xboader = 600;
	
	gravity = 0.03;
	friction = 0.989;
		
	for(int cnt = 0; cnt < pieces; cnt++){
		x = ofRandom(-450, 450);
		y = ofRandom(-350, 350);
		for(int ct = 0; ct < 3; ct++){
			TrianglePositionVector[cnt][ct].x = ofRandom(xboader, ofGetWidth() - xboader) + x;
			TrianglePositionVector[cnt][ct].y = ofRandom(yboader, ofGetHeight() - yboader) + y;
			TriangleDirectionVector[cnt].x = ofRandom(-2, 1); //X軸方向の移動速度
			TriangleDirectionVector[cnt].y = ofRandom(-2, 1); //Y軸方向の移動速度
		}
				
		alpha[cnt] = ofRandom(45, 100);
		pattern[cnt] = floor(ofRandom(0, 1) + 0.5);
	}
}

//--------------------------------------------------------------
void Gravity::update(){
	for (int i = 0; i < pieces; i++){
		x = ofRandom(-450, 450);
		y = ofRandom(-350, 350);
		for(int j = 0; j < 3; j++){
			TriangleDirectionVector[i].x *= friction;
			TriangleDirectionVector[i].y *= friction;
			TriangleDirectionVector[i].y += gravity;
			TrianglePositionVector[i][j].x += TriangleDirectionVector[i].x;
			TrianglePositionVector[i][j].y += TriangleDirectionVector[i].y;

			if (TrianglePositionVector[i][j].x > ofGetWidth() || TrianglePositionVector[i][j].x < 0) 
				TriangleDirectionVector[i].x *= -1;
			if (TrianglePositionVector[i][j].y > ofGetHeight() + 80) {
				for (int k = 0; k < 3; k++) {
					TrianglePositionVector[i][k].x = ofRandom(xboader, ofGetWidth() - xboader) + x;
					TrianglePositionVector[i][k].y = ofRandom(yboader, ofGetHeight() - yboader) - ofGetHeight();
				}
				// break;
			}
		}
	}
}

//--------------------------------------------------------------
void Gravity::draw(){
	ofColor colorParam[4];
	colorParam[0].r = 237; colorParam[0].g = 237; colorParam[0].b= 237;
	colorParam[1].r = 214; colorParam[1].g = 214; colorParam[1].b= 214;
	colorParam[2].r = 242; colorParam[2].g = 242; colorParam[2].b= 242;

	for (int i = 0; i < pieces; i++){
		ofPushMatrix();
		// ofTranslate(TriangleDirectionVector[i].x, TriangleDirectionVector[i].y);
		if (pattern[i] == 1) {
			ofNoFill();
			ofSetLineWidth(outline);
		}
		else 
			ofFill();
		ofSetColor(colorParam[i % 3], alpha[i]);
		ofTriangle(TrianglePositionVector[i][0], TrianglePositionVector[i][1], TrianglePositionVector[i][2]);
		ofPopMatrix();
	}
}

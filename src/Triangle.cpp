#include "Triangle.h"

//--------------------------------------------------------------
void Triangle::setup(){
	ofBackground(255);
	ofEnableAlphaBlending();
	ofEnableSmoothing();
	float x, y;
	outline = 2.5;
      pieces = 120;
      	yboader = 300;
       xboader = 600;

	for(int cnt = 0; cnt < pieces; cnt++){
		x = ofRandom(-450, 450);
		y = ofRandom(-350, 350);
		for(int ct = 0; ct < 3; ct++){
			TrianglePositionVector[cnt][ct].x = ofRandom(xboader, ofGetWidth() - xboader) + x;
			TrianglePositionVector[cnt][ct].y = ofRandom(yboader, ofGetHeight() - yboader) + y;
			TriangleDirectionVector[cnt].x = ofRandom(-1, 1); //X軸方向の移動速度
			TriangleDirectionVector[cnt].y = ofRandom(-1, 1); //Y軸方向の移動速度
		}
	}
}

//--------------------------------------------------------------
void Triangle::update(){
	for (int i = 0; i < pieces; i++){
		for(int j = 0; j < 3; j++){
			TrianglePositionVector[i][j].x += TriangleDirectionVector[i].x;
			TrianglePositionVector[i][j].y += TriangleDirectionVector[i].y;

			if (TrianglePositionVector[i][j].x > ofGetWidth() || TrianglePositionVector[i][j].x < 0) 
				TriangleDirectionVector[i].x *= -1;
			if (TrianglePositionVector[i][j].y > ofGetHeight() || TrianglePositionVector[i][j].y < 0)
				TriangleDirectionVector[i].y *= -1;
		}
	}
}

//--------------------------------------------------------------
void Triangle::draw(){
	ofColor colorParam[4];
	colorParam[0].r = 255; colorParam[0].g = 206; colorParam[0].b= 10;
	colorParam[1].r = 131; colorParam[1].g = 255; colorParam[1].b= 0;
	colorParam[2].r = 20; colorParam[2].g = 246; colorParam[2].b= 255;
	colorParam[3].r = 250; colorParam[3].g = 0; colorParam[3].b= 191;

	for (int i = 0; i < pieces; i++){
		ofPushMatrix();
		ofTranslate(TriangleDirectionVector[i].x, TriangleDirectionVector[i].y);
		ofSetColor(colorParam[i % 4]);
		ofNoFill();
		ofSetLineWidth(outline);
		ofTriangle(TrianglePositionVector[i][0], TrianglePositionVector[i][1], TrianglePositionVector[i][2]);
		ofPopMatrix();
	}
}

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int renge;
		float diam;
		int radian;
		ofPoint point[3];
		ofVec2f vec[3];

};

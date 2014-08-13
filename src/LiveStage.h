#pragma once

#include "ofMain.h"

class LiveStage : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		#define CIRCLES 10
		#define DIAM 15
		#define PENLIGHT 30

		ofPoint Particlepoint[CIRCLES];
		ofPoint RightPenLight[PENLIGHT], LeftPenLight[PENLIGHT];
		ofVec2f Particlevec[CIRCLES];
		float timer;

};

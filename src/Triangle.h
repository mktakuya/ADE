#pragma once

#include "ofMain.h"

class Triangle : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		float outline = 2.5;
		int pieces = 120;
		int yboader = 300;
		int xboader = 600;

		int pattern[120];
		int alpha[120];
		float grays[4][3] = { {193, 186, 186}, {214, 214, 214}, {227, 230, 232}, {202, 205, 206} };
		float pastel[4][3];

		ofVec2f TrianglePositionVector[120][3];
		ofVec2f TriangleDirectionVector[120];
		
};

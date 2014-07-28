#pragma once

#include "ofMain.h"

class Rectfall : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int rectcolorNum[3], trianglecolorNum[3];
		float length;
		float triangleDegree[3];
		bool fall;
		float height, radius;
		ofColor colors[3];

};

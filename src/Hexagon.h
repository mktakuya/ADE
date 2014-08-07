#pragma once

#include "ofMain.h"

class Hexagon : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		int rotation(int times);

		float radius[3];
		float omega[3];

};

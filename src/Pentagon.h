#pragma once

#include "ofMain.h"

class Pentagon : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		int rotation(int times);

		float radius[3];
		float omega[3];

};

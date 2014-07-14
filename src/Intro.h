#pragma once

#include "ofMain.h"

class Intro : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void drawBigRect(float *param);
		void drawSomeRect(float *param, int *switcher);

};

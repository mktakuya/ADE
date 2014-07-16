#pragma once

#include "ofMain.h"

class Wave : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int max_dia = 700;
		int circle = 6;
		float x, y;
		float diameter[6];
		float dia_coefficient[6];
		float diff[6];

};

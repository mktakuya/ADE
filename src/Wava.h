#pragma once

#include "ofMain.h"

class Wave : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

	const int MAX_DIA 700
	const int CIRCLE 6

	float x, y;
	float diameter[6];
	float dia_coefficient[6];
	float diff[6];

};

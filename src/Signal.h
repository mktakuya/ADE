#pragma once

#include "ofMain.h"

class Signal : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

	const int  CLOCL 300
	const int PIECE 35	

	float randx[35], randy[35], randz[35];
	float pNoise[35];
};

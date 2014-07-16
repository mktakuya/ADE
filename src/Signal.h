#pragma once

#include "ofMain.h"

class Signal : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int clocks;
		int piece;

		float randx[35];
		float randy[35];
		float randz[35];
		float pNoise[35];
		
};

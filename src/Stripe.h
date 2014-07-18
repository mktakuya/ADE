#pragma once

#include "ofMain.h"

class Stripe : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		
		bool rotateFlag;
		bool even;
		float degree;
		int colorType;


};

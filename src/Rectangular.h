#pragma once

#include "ofMain.h"

class Rectangular : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		static const int NUM =10;
		
		ofBoxPrimitive box;
		bool hide_black;
		bool hide_white;
		float sec;
		float height[10];
		int limits[11];
		int ypoint[10][2];
		int xpoint[10];

};

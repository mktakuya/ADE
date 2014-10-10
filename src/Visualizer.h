#pragma once

#include "ofMain.h"

class Visualizer : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		#define CIRCLE 15
		#define RECT 90

		ofVec2f circlePosition[CIRCLE], circleVec[CIRCLE];
		float radius[CIRCLE];
		int rect_width, rect_interval;
		int counter;
		float randx[RECT + 1], randy[RECT + 1], randz[RECT + 1], pNoise[RECT + 1];

};

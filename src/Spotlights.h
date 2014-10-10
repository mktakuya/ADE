#pragma once

#include "ofMain.h"
#include "ofxCvColorImage.h"

class Spotlights : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int drawCircleFlag;
		float x, y;
		float dx;
		ofImage hurly_burly[2];
		int img_num;
		ofxCvColorImage cv_img;
};

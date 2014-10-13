#include "EnergyBliss.h"

//--------------------------------------------------------------
void EnergyBliss::setup(){

	ofBackground(255);
	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetCircleResolution(64);

	ofScale(1, -1);

	clocks = 300;
	piece = 34;
	times = 0;
	lyrics[0].loadImage("lyrics_1.png");
	lyrics[1].loadImage("lyrics_2.png");
	lyrics[2].loadImage("lyrics_3.png");
	lyrics[3].loadImage("lyrics_4.png");
	lyrics[4].loadImage("lyrics_5.png");

}

//--------------------------------------------------------------
void EnergyBliss::update(){

	for(int i = 0; i < piece; i++){
		randy[i] = ofRandom(0, 1);
		randy[i] += 0.01;
		randx[i] = ofRandom(0, 1);
		randx[i] += 0.01;
		randz[i] = ofRandom(0, 1);
		randz[i] += 0.01;

		pNoise[i] = ofNoise(randx[i], randy[i], randz[i]) * 10;
	}

	times++;

}

//--------------------------------------------------------------
void EnergyBliss::draw(){

	float width = 0, height = 0;

	for(int i = 0; i < piece; i++){
		for(int j = 1; j <= pNoise[i]; j++){
			ofSetColor(0, 0, 0, 200);
			ofFill();
			ofRect(15 + 40 * i, ofGetHeight() - 40 * j, 20, 20);
		}
	}

	 ofSetColor(255, 255, 255);

	// if (2 <= times) {
	// 	lyrics[0].draw(10, 10);
	// 	if (3 <= times) {
	// 		height = 10 + lyrics[0].height;
	// 		lyrics[1].draw(10, height);
	// 		if (4 <= times) {
	// 			width = 10 + lyrics[1].width;
	// 			lyrics[2].draw(width - 10, height);
	// 			if (5 <= times) {
	// 				width += lyrics[2].width;
	// 				lyrics[3].draw(width - 20, height + 1);
	// 				if (6 <= times) {
	// 					width += lyrics[3].width;
	// 					lyrics[4].draw(width - 40, height - 5);
	// 					if (7	 <= times) {
	// 						times = 0;
	// 					}
	// 				}
	// 			}
	// 		}
	// 	}
	// }
 	ofSleepMillis(clocks);

}

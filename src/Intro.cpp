#include "Intro.h"

//--------------------------------------------------------------
void Intro::setup(){
	nowrectcolor = 0;
	pastrectcolor = 1;
	rectmode = 1;
	firstSequenceBuf = 0;
	SecondSequenceBuf = 0;
	clocks = 600;
	num = 5;
    
	width = 80;
	height = 80;
	xinterval = (ofGetWidth() - width * num) / (num + 1);
	yinterval = (ofGetHeight() - height * num) / (num + 1);
	for (int i = 0; i < 25; i++)
		rectswitch[i]  = 0;
    
	ofEnableSmoothing();
	ofEnableAlphaBlending();
	if (rectmode == 1)
		ofBackground(255);
	else 
		ofBackground(0);
}

//--------------------------------------------------------------
void Intro::update(){
	if (rectmode == 1){
		if (firstSequenceBuf > 6.0){
			rectmode = 2; 
			firstSequenceBuf = 0;
			ofBackground(0);
		}
		else{
			if (nowrectcolor == 0){
				switch(pastrectcolor){
                    case 1:
                        nowrectcolor = 2;
                        pastrectcolor = 2;
                        break;
                        
                    case 2:
                        nowrectcolor = 3;
                        pastrectcolor = 3;
                        break;
                        
                    case 3:
                        nowrectcolor = 1;
                        pastrectcolor = 1;
                        break;
				}
			}
			else{
				nowrectcolor = 0;
			}
			firstSequenceBuf += 0.6;
		}
	}
	else{
		if (SecondSequenceBuf > 7.2){
			rectmode = 1;
			nowrectcolor = 0;
			pastrectcolor = 1;
			SecondSequenceBuf = 0;
			ofBackground(255);
		}
        
		else{
			for (int i = 0; i < 16; i++) 
				rectswitch[i] = 0;
			for (int i = 0; i < 6; i++){
				int num = floor(ofRandom(16));
				if (rectswitch[num] != 1)
					rectswitch[num] = 1;
			}
			SecondSequenceBuf += 0.6;
		}
	}
}

//--------------------------------------------------------------
void Intro::draw(){
	float param[4][4] = { {30, 30, 30, 255}, {255, 255, 255, 127}, {233, 255, 0, 127}, {0, 195, 255, 127} };
	float rectColor[4] = {20, 150, 255, 255};
	if(rectmode == 1)
		drawBigRect(param[nowrectcolor]);		
	else
		drawSomeRect(rectColor, rectswitch);
	ofSleepMillis(clocks);
}

void Intro::drawBigRect(float *param){
	ofSetColor(param[0], param[1], param[2], param[3]);
	ofFill();
	ofRect(0, 0, ofGetWidth(), ofGetHeight());
}

void Intro::drawSomeRect(float *param, int *switcher){
	for (int i = 0; i < num; i++){
		for (int j = 0; j < num; j++){
			if(switcher[i * j] == 1){
				ofSetColor(param[0], param[1], param[2], param[3]);
				ofFill();
				ofRect(xinterval + (j * (xinterval + width)), yinterval + (i * (yinterval + height)), width, height);
			}
			else{
				ofSetColor(255, 255, 255, 170);
				ofFill();
				ofRect(xinterval + (j * (xinterval + width)), yinterval + (i * (yinterval + height)), width, height);
			}
		}
	}
}

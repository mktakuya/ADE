#include "MonochromeTile.h"

//--------------------------------------------------------------
void MonochromeTile::setup(){
    tileWidth = 150;
    tileHeight = 150;
    frame = 0;
    
    for (int i = 0; i < TILE_LINE; i++) {
        for (int j = 0; j < TILE_COLUMN; j++) {
            tileColors[i][j] = ofRandom(0, 10);
            switch (tileColors[i][j]) {
                case 0:
                case 1:
                case 2:
                case 3:
                    tileR[i][j] = 0;
                    tileG[i][j] = 0;
                    tileB[i][j] = 0;
                    break;
                    
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    tileR[i][j] = 255;
                    tileG[i][j] = 255;
                    tileB[i][j] = 255;
                    break;
                    
                case 9:
                    tileR[i][j] = 0;
                    tileG[i][j] = 0;
                    tileB[i][j] = 255;
                    break;
            }
            tileX[i][j] = 10 * j + j * tileWidth;
            tileY[i][j] = 10 * i + i * tileHeight;
        }
    }
}

//--------------------------------------------------------------
void MonochromeTile::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < TILE_LINE; i++) {
            for (int j = 0; j < TILE_COLUMN; j++) {
                tileColors[i][j] = ofRandom(0, 10);
                switch(tileColors[i][j]) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                        tileR[i][j] = 0;
                        tileG[i][j] = 0;
                        tileB[i][j] = 0;
                        break;
                        
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                        tileR[i][j] = 255;
                        tileG[i][j] = 255;
                        tileB[i][j] = 255;
                        break;
                        
                    case 9:
                        tileR[i][j] = 0;
                        tileG[i][j] = 0;
                        tileB[i][j] = 255;
                        break;
                }
            }
        }
    }
}

//--------------------------------------------------------------
void MonochromeTile::draw(){
    for (int i = 0; i < TILE_LINE; i++) {
        for (int j = 0; j < TILE_COLUMN; j++) {
            ofSetColor(tileR[i][j], tileG[i][j], tileB[i][j]);
            ofRect(tileX[i][j], tileY[i][j], tileWidth, tileHeight);
        }
    }
}

//--------------------------------------------------------------
void MonochromeTile::keyPressed(int key){
    
}

//--------------------------------------------------------------
void MonochromeTile::keyReleased(int key){
    
}

//--------------------------------------------------------------
void MonochromeTile::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void MonochromeTile::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MonochromeTile::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MonochromeTile::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MonochromeTile::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void MonochromeTile::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void MonochromeTile::dragEvent(ofDragInfo dragInfo){ 
    
}
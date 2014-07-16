#include "Tile.h"

//--------------------------------------------------------------
void Tile::setup(){
    ofBackground(255);
    tileWidth = 150;
    tileHeight = 150;
    frame = 0;
    
    for (int i = 0; i < TILE_LINE; i++) {
        for (int j = 0; j < TILE_COLUMN; j++) {
            colorFlag[i][j] = ofRandom(0, 3);
            
            switch (colorFlag[i][j]) {
                case 0:
                    tileR[i][j] = 0;
                    tileG[i][j] = 255;
                    tileB[i][j] = 255;
                    break;
                    
                case 1:
                    tileR[i][j] = 255;
                    tileG[i][j] = 0;
                    tileB[i][j] = 255;
                    break;
                    
                case 2:
                    tileR[i][j] = 255;
                    tileG[i][j] = 212;
                    tileB[i][j] = 0;
                    break;
            }
            
            tileX[i][j] = 10 * j + j * tileWidth;
            tileY[i][j] = 10 * i + i * tileHeight;
        }
    }
}

//--------------------------------------------------------------
void Tile::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < TILE_LINE; i++) {
            for (int j = 0; j < TILE_COLUMN; j++) {
                colorFlag[i][j] = ofRandom(0, 3);
                switch(colorFlag[i][j]) {
                    case 0:
                        tileR[i][j] = 0;
                        tileG[i][j] = 255;
                        tileB[i][j] = 255;
                        break;
                    case 1:
                        tileR[i][j] = 255;
                        tileG[i][j] = 0;
                        tileB[i][j] = 255;
                        break;
                    case 2:
                        tileR[i][j] = 255;
                        tileG[i][j] = 212;
                        tileB[i][j] = 0;
                        break;
                }
            }
        }
    }
}

//--------------------------------------------------------------
void Tile::draw(){
    for (int i = 0; i < TILE_LINE; i++) {
        for (int j = 0; j < TILE_COLUMN; j++) {
            ofSetColor(tileR[i][j], tileG[i][j], tileB[i][j]);
            ofRect(tileX[i][j], tileY[i][j], tileWidth, tileHeight);
        }
    }
}

//--------------------------------------------------------------
void Tile::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Tile::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Tile::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Tile::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Tile::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Tile::dragEvent(ofDragInfo dragInfo){
    
}

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.loadImage("jason.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int red = ofMap(mouseX, 0, ofGetWidth(),0, 255);
    
    
    int inc = 15;
    float imgWidth = ofGetWidth() / inc;
    float imgHeight = ofGetHeight() / inc;
    
    for (int x = 0; x < inc; x++) {
        for (int y = 0; y < inc; y++) {
            ofSetColor(red, y * 50, x * 50);
            
            
            float posX = imgWidth * x;
            float posY = imgHeight * y;
            
            if (mouseX < posX && mouseY < posY) {
                image.draw(posX,
                           posY,
                           imgWidth,
                           imgHeight);
            }
            else {
                ofRect(posX,
                       posY,
                       imgWidth,
                       imgHeight);
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

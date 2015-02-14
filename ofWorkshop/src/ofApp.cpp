#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(500);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 25, 0);
    
    
//    ofFill();
//    ofSetColor(255, 0, 0);
//    ofCircle(100, 100, 50);
//    
//    
//    
//    ofSetColor(255, 127,80, 127);
//    ofRect(50, 100, ofGetWidth()/2, 100);
//    
//    
//    
//    
//    ofNoFill();
//    ofSetColor(127);
    cam.begin();
    for (int i = 0; i < 5; i++) {
        ofSetColor(i*50);
        myTriangle(ofGetWidth()/2, i * 100, 50 + i * 50);
    }
    
    cam.end();
    
    
    
//    ofSetColor(45);
//    ofLine(800, 0, 800, ofGetHeight());
}


//--------------------------------------------------------------
void ofApp::myTriangle(float triangleX, float triangleY, float baseWidth){
    ofTriangle(triangleX, triangleY,
               triangleX - baseWidth, triangleY + 100,
               triangleX + baseWidth, triangleY + 100);
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

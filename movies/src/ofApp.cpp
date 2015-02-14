#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    movie.loadMovie("998_2311.MOV");
    movie.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    movie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    movie.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 's') {
        movie.stop();
    }
    
    if (key == 'p') {
        movie.play();
        movie.setSpeed(1.0);
    }
    
    if (key == 'f') {
        movie.setSpeed(2.0);
    }
    
    if (key == 'r') {
        movie.setSpeed(-2.0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    float pct = ofMap(x, 0, ofGetWidth(), 0.0, 1.0);
    movie.setPosition(pct);
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

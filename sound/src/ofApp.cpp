#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sound1.loadSound("LCAD78.mp3");
    sound2.loadSound("LCAD77.mp3");
    sound3.loadSound("LCAD78.mp3");
    sound4.loadSound("LCAD77.mp3");
    sound5.loadSound("LCAD78.mp3");
    
    sound1.setLoop(true);
   
//    sound1.play();
//    sound2.play();
    
    button1.set(100, 100, 200, 202);

}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofRect(button1);
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
    if (button1.inside(x, y)) {
        sound1.play();
    }
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

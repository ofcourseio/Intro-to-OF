#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    
    camera.setDistance(500);
    plane.set(100, 100, 5, 10);
    
    
    sphere.set(25, 50);
    
    post.init(1024, 768);
    post.createPass<NoiseWarpPass>()->setEnabled(true);
    post.createPass<KaleidoscopePass>()->setEnabled(true);
    post.createPass<BloomPass>()->setEnabled(true);
    
    ofBackground(ofColor::seaShell);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    post.begin();
    camera.begin();
    ofSetColor(0);
    plane.draw();
    
    ofSetColor(127,127,126);
    sphere.draw();
    
    ofPushMatrix();
    
    
    
    ofRotate(ofGetFrameNum(), 0.0, 1.0, 0.0);
    ofScale(0.5, 0.3, 2.0);
    ofTranslate(0, 0, 200);
    
    ofSetColor(0);
    plane.draw();
    
    ofSetColor(127,127,126);
    sphere.draw();
    ofPopMatrix();
    
    camera.end();
    post.end();
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

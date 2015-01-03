#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(63);
    ofSetFrameRate(60);
    ofSetCircleResolution(4);
    for (int i = 0; i < CIRCLE_NUM; i++) {
        particle[i].friction = 0.02;
        particle[i].gravity.set(0, 0.25);
        particle[i].setInit(ofVec2f(ofGetWidth()/2, ofGetHeight()/2));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < CIRCLE_NUM; i++) {
        particle[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < CIRCLE_NUM; i++) {
        particle[i].draw();
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

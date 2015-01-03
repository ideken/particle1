#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(63);
    ofSetFrameRate(60);
    ofSetCircleResolution(4);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].draw();
    }
    ofDrawBitmapString("Particle Num = " + ofToString(particles.size()), ofPoint(10, 20));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }
    if (key == 'c') {
        particles.clear();
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
    Particle p;
    p.friction = 0.01;
    p.gravity.set(0, 0);
    p.setInit(ofVec2f(x, y));
    float length = ofRandom(3.0);
    float angle = ofRandom(2*PI);
    p.velocity.x = length * cos(angle);
    p.velocity.y = length * sin(angle);
    particles.push_back(p);

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

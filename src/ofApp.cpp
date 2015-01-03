#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetCircleResolution(4);
//    ofSetBackgroundAuto(false);
    mesh.setMode(OF_PRIMITIVE_POINTS);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofSetColor(0, 0, 0, 10);
//    ofRect(0, 0, ofGetWidth(), ofGetHeight());

    
//    ofNoFill();

    mesh.clear();
    for (int i = 0; i < particles.size(); i++) {
        mesh.addVertex(ofVec3f(particles[i].position.x, particles[i].position.y,0));
    }
    mesh.draw();
    
    ofSetColor(255);
    ofDrawBitmapString("FPS          = " + ofToString(ofGetFrameRate()), ofPoint(10, 20));
    ofDrawBitmapString("Particle Num = " + ofToString(particles.size()), ofPoint(10, 40));
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
    for (int i = 0; i < 400; i++) {
        Particle p;
        p.friction = 0.01;
        p.gravity.set(0, 0);
//        p.color.r = ofRandom(200, 255);
//        p.color.g = ofRandom(200, 255);
//        p.color.b = ofRandom(200, 255);
        p.setInit(ofVec2f(x, y));
        float length = ofRandom(2.0);
        float angle = ofRandom(2*PI);
        p.velocity.x = length * cos(angle);
        p.velocity.y = length * sin(angle);
        particles.push_back(p);
    }

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

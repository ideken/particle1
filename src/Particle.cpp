//
//  Particle.cpp
//  particle1
//
//  Created by Kenji IDE on 1/3/15.
//
//

#include "Particle.h"

void Particle::update(){
    //    resetForce();
    addForce(gravity);
    updateForce();
    updatePos();
    checkBounds(0, 0, ofGetWidth(), ofGetHeight());
    constrain(0, 0, ofGetWidth(), ofGetHeight());
}

//-------------------------------------------------

void Particle::draw(){
    ofSetColor(color);
    ofCircle(position, 4);
}

//-------------------------------------------------

void Particle::setInit(ofVec2f _initPos){
    position.x = _initPos.x;
    position.y = _initPos.y;
    
//    float length = ofRandom(8.0);
//    float angle = ofRandom(2*PI);
//    velocity.x = length * cos(angle);
//    velocity.y = length * sin(angle);
    
//    color.r = ofRandom(200, 255);
//    color.g = ofRandom(200, 255);
//    color.b = ofRandom(200, 255);
    
}

//-------------------------------------------------

void Particle::resetForce(){
    force.set(0, 0);
}

//-------------------------------------------------

void Particle::addForce(ofVec2f _force){
    force = _force;
}

//-------------------------------------------------

void Particle::updateForce(){
    force -= velocity * friction;
}
//-------------------------------------------------

void Particle::updatePos(){
    velocity += force;
    position += velocity;
}

//-------------------------------------------------

void Particle::checkBounds(int _minX, int _minY, int _maxX, int _maxY){
    if (position.x < _minX || position.x > _maxX) {
        velocity.x *= -1;
    }
    if (position.y < _minY || position.y > _maxY) {
        velocity.y *= -1;
    }
}

//-------------------------------------------------
void Particle::constrain(int _minX, int _minY, int _maxX, int _maxY){
    if (position.x < _minX) {
        position.x = _minX + (_minX - position.x);
    }
    if (position.y < _minY) {
        position.y = _minY + (_minY - position.y);
    }
    if (position.x > _maxX) {
        position.x = _maxX + (_maxX - position.x);
    }
    if (position.y > _maxY) {
        position.y = _maxY + (_maxY - position.y);
    }
}
//
//  Particle.h
//  particle1
//
//  Created by Kenji IDE on 1/3/15.
//
//

#ifndef __particle1__Particle__
#define __particle1__Particle__
#include "ofMain.h"

class Particle{
public:
    
    //method
    void update();
    void draw();
    void setInit(ofVec2f initPos);
    void resetForce();
    void addForce(ofVec2f force);
    void updateForce();
    void updatePos();
    void checkBounds(int minX, int minY, int maxX, int maxY);
    void constrain(int minX, int minY, int maxX, int maxY);
    
    //property
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f force;
    ofVec2f gravity;
    float friction;
    
private:
    
};

#endif /* defined(__particle1__Particle__) */

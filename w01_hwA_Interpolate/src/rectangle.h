//
//  rectangle.h
//  emptyExample
//
//  Created by roulag on 9/1/14.
//
//
#pragma once

#include "ofMain.h"

    // declare the class
class rectangle {

    public:

    //setup
  rectangle();
    void draw();
    void moveByPct(float myPct); // movement
    

   //variables & positions
    
    ofPoint pos; // variable position
    
    ofPoint posa; //start
    ofPoint posb; //end
    
    float pct; //variable from 0 to 1 between point a and point b

    private:

};
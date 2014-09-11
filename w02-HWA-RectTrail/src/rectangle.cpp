//
//  rectangle.cpp
//  RecTrail
//
//  Created by Mac User on 9/10/14.
//
//
#include "ofMain.h"
#include "rectangle.h"

//------------------------------------------------------------------------------------
void rectangle::set(float _dist, float _intAngle){
    radius = _dist;
    angle = _intAngle;
}
//------------------------------------------------------------------------------------
void rectangle::update(float _step, ofPoint _center){
    //angle++
    angle += _step;
    //center
    float xorig = ofGetWidth()*0.5;
    float yorig = ofGetHeight()*0.5;
    //actually moving
    x = xorig + radius * cos(angle);
    y = yorig + radius * sin(angle);
    tail.push_back(*this);
    if(tail.size()>100){
        //erase after 100
        //tail.erase(tail.begin());
    }
}
//------------------------------------------------------------------------------------
void rectangle::draw(){
    ofSetColor(255);
    ofPushStyle();
    ofSetColor(200,0,200,0);
    ofBeginShape();
    
    for (int i = 0; i < tail.size(); i++) {
    ofVertex(tail[i]);
     }
    
     for (ofPoint it: tail) {
     ofVertex(it);
     }
    //dont
    ofEndShape(false);
    ofPopStyle();
    //draw rectangle
    ofRect(x, y,size,size);
}
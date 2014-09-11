//
//  rectangle.cpp
//  emptyExample
//
//  Created by roulag on 9/1/14.
//
//



#include "rectangle.h"



rectangle::rectangle(){
    
}

//------------------------------------------------------------------
void rectangle::draw() {
    
    //fill shape
	ofFill();
    
    //change mode to center
	ofSetRectMode(OF_RECTMODE_CENTER);
  
    ofSetColor(0);
    
    //draw rectangle
    ofRect(pos.x, pos.y, 30,30);
    
}


void rectangle::moveByPct(float myPct){
    
	pct = myPct;
	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;
	
	// this is an alternative way to write above..
	// differe style, but the same mathematically.
	//pos.x = posa.x + (pct) * (posb.x-posa.x);
}
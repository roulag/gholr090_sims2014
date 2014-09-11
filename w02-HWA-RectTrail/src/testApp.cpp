#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    // setup the classes size, angle and distance
    for(int i = 0; i < 20; i++){
        myRectangle[i].size = i*4;
        //angle and distance - what angle to project and what distance
        myRectangle[i].set(6 * i, i);
    }
}
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < 60; i++){
       
        myRectangle[i].update(0.01*i, ofPoint(i*40, i*60));
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(0);
    for(int i = 0; i < 40; i++){
        myRectangle[i].draw();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
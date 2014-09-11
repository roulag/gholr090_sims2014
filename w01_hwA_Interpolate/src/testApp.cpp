
#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetFrameRate(60);
    //ofSetVerticalSync(true);
    ofBackground(255);
    
    //set the start (posa) of the rectangle
    myRectangle.posa.x = ofGetWidth()/3; //a third of the way into the screen
    myRectangle.posa.y = ofGetHeight()/2; //middle of the screen on the y
    
    //and end (posb) positions of the rectangle
    myRectangle.posb.x = ofGetWidth()/3 * 2; //a third of the way to the screen end
    myRectangle.posb.y = ofGetHeight()/2; //middle of the screen on the y
    
    // start at 0 percent
    myRectangle.moveByPct(0);
    // a variable we can alter...
	pct = 1;
    
    counter = 0;
//Screen: 1024 pixels; 23.5 cm /3 = 15.6cm
//Millis = 62
//Speed: 30 pixels/frame
//Framerate: 60 frames/second
//So:
//    1800 pixels/second across a 1024-pixel wide screen = 0.62 seconds
//    23.5 cm / 0.62 seconds = 37.9
// convert to miles...



}

//--------------------------------------------------------------
void testApp::update(){
    //print percentage in the console
    printf("%f \n", pct);
    
    //print counter in the console to get the MPH
    cout << "counter " << counter << "\n";
    
    //increase the percentage by a certain amount - create keyframes
    //pct += 0.00001f; // slow
    pct += 0.9999999f; // fast
    
    //if the percentage is over 1 - then reset it to 0
    if (pct>1){
        pct = 0;
    }
    
    
    // Move between posistion a and position b
    myRectangle.moveByPct(pct);
    
    counter = counter +1;
    
    if (counter == 2){
        ofGetElapsedTimeMillis();
        cout << "millis" << ofGetElapsedTimeMillis() << "\n";
    };
    
    //millis = 62
    
    
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(255);
    myRectangle.draw();

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
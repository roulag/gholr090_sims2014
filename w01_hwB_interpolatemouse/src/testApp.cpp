
#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetFrameRate(60);
   
    ofBackground(255);
    
    
    //set the start (posa) x and y positions of the rectangle
    myRectangle.posa.x = ofGetWidth()/4;
    myRectangle.posa.y = ofGetHeight()/2;
    
    //set the end (posb) x and y positions of the rectangle
    myRectangle.posb.x = ofGetWidth() - ofGetWidth()/4;
    myRectangle.posb.y = ofGetHeight()/2;
    
    //start at 0%
    myRectangle.moveByPct(0);
    
    //variable
    pct = 1;
    counter = 1;
}





//--------------------------------------------------------------
void testApp::update(){
    
    //print percentage in the console
    printf("%f \n", pct);
    
    //print counter in the console to get the MPH
    cout << "counter " << counter << "\n";
    
    //increase the percentage by a certain amount - create a certain number of keyframes
    pct += .003f;
    //if the percentage is over 1 - then reset it to 0
    if (pct > 1){
        pct = 0;
    }
    //move the rectangle between posa and posb
    myRectangle.moveByPct(pct);
    
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
    
    if (counter == 1){ //finish is mouse position
        //reset the percentage
        pct = 0;
        //reset the start (posa) positions of x and y to be the current x and y (pos)
        myRectangle.posa.x = myRectangle.pos.x;
        myRectangle.posa.y = myRectangle.pos.y;
        //change the desitination (posb) positions of x and y to be where the mouse was clicked
        myRectangle.posb.x = mouseX;
        myRectangle.posb.y = mouseY;
        //alternate between changing start and finish on click
        counter++;
    
    }else if (counter == 2){ //beginning is mouse position
        //reset %
        pct = 0;
        //reset the start (posab) positions of x and y to be the current x and y (pos)
        myRectangle.posb.x = myRectangle.pos.x;
        myRectangle.posb.y = myRectangle.pos.y;
        //change the desitination (posa) positions of x and y to be where the mouse is clicked
        myRectangle.posa.x = mouseX;
        myRectangle.posa.y = mouseY;
        //alternate between changing start and finish on click
        counter-1;
    }

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
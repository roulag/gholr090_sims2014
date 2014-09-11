
#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetFrameRate(60);
   
    ofBackground(255);
    
	ofSetVerticalSync(true);
    
	// now we are using multiple rectangles....
	// set the "a" and "b" positions of the
	for (int i = 0; i < 50; i++){
		myRectangles[i].posa.x = 0;
		myRectangles[i].posa.y = 10 + i*30;
		myRectangles[i].posb.x = 300;
		myRectangles[i].posb.y =   10 +i*30;
		myRectangles[i].shaper = 0.1 + 0.8 * i;
		myRectangles[i].moveByPct(0);	// start at 0 pct
	}
	pct = 0;							// a variable we can alter...
}





//--------------------------------------------------------------
void testApp::update(){
    
 
   	pct += 0.008f;							// increase by a certain amount
	if (pct > 1) pct = 0;					// just between 0 and 1 (0% and 100%)
	for (int i = 0; i < 50; i++){
		myRectangles[i].moveByPct(pct);		// go between pta and ptb
	}
    
    if (counter == 2){
        ofGetElapsedTimeMillis();
        cout << "millis" << ofGetElapsedTimeMillis() << "\n";
    };
    
    //millis = 62
    
    
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i = 0; i < 30; i++){
		ofSetColor(198,246,55);
		//if (i == 3) ofSetColor(255,0,0);
		myRectangles[i].draw();
	}
	
	ofSetColor(255,255,255);
	for (int i = 0; i < 30; i++){
		ofLine(0,i*20, ofGetWidth(), i*20);
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
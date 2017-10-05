#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    pos.x = 40;
    pos.y = 400;
    
    ptA.set(0,300);
    ptB.set(ofGetWidth(), 300);


    startTime = ofGetElapsedTimef();
    duration = 5;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    // this was just messing around:
    //pos.x += 1;
    
    float elapsedTime = ofGetElapsedTimef() - startTime;
    
    cout << "elapsedTime " << elapsedTime << endl;
    
    float pct = elapsedTime / duration;
    
    // We love numbers between 0 and 1 <3
    //pct = powf(pct, 3);
    
    // traffic camera, police up ahead.
    pct = powf(pct, .1);
    
    //cout << pct << endl;
    
    pos = (1-pct) * ptA + pct * ptB;
    
    if (pct > 1){
        startTime = ofGetElapsedTimef();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    // basic animation!
    
    ofBackground(0);
    ofCircle(pos, 5);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        startTime = ofGetElapsedTimef();
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

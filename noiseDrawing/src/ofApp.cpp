#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    ofSetColor(255);
    
    
    // ofNoise( .. )     <--- 0-1
    // ofSignedNoise(..)  <--- -1 1
    // ofNoise(float);
    // ofNoise(float, float);
    // ofNoise(float, float, float);
    
    
    // noisy via random
//    for (int i = 0; i < 100; i++ ){
//        ofDrawLine(100 + i*3, ofGetHeight()/2,
//                   100 + i*3, ofGetHeight()/2 + 100 + ofRandom(-50,50));
//    }
    
    //noisy via noise:
    for (int i = 0; i < 100; i++ ){
        ofDrawLine(100 + i*3, ofGetHeight()/2,
                   100 + i*3, ofGetHeight()/2 + 100 +
                   ofSignedNoise(i*0.05, ofGetElapsedTimef())*50);
    }

    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

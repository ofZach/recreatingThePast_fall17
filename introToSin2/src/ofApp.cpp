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
    
    // frequency:
    
//    float sinVal = sin(ofGetElapsedTimef());
//    ofDrawCircle( ofMap(sinVal, -1, 1, 200,600), 100, 20);
//    
//    float sinVal2 = sin(ofGetElapsedTimef()*2);
//    ofDrawCircle( ofMap(sinVal2, -1, 1, 200,600), 150, 20);
//    
//    
//    float sinVal3 = sin(ofGetElapsedTimef()*3);
//    ofDrawCircle( ofMap(sinVal3, -1, 1, 200,600), 200, 20);
    
//    for (int i = 0; i < 10; i++){
//        float sinVal = sin(ofGetElapsedTimef()*(i+1));
//        ofDrawCircle( ofMap(sinVal, -1, 1, 200,600), 100 +50*i, 20);
//    }
    
    for (int i = 0; i < 10; i++){
        float sinVal = sin(ofGetElapsedTimef() + i*0.8 );
        ofDrawCircle( ofMap(sinVal, -1, 1, 200,600), 100 +50*i, 20);
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

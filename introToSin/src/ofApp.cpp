#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //sin(...);
    
    //cout << sin( ofGetElapsedTimef() ) << endl;
   
    //  ofMap(   );
    
    float sinVal = sin( ofGetElapsedTimef() );
    cout << ofMap(sinVal, -1, 1, 0, 100) << endl;
    
    //ofBackground(ofMap(sinVal, -1, 1, 0, 255));
    
//    ofDrawCircle(ofMap(sinVal, -1, 1, 0, ofGetWidth()),
//                 ofGetHeight()/2,
//                 100);
    
    ofDrawCircle(ofGetWidth()/2,
                 ofGetHeight()/2,
                 ofMap(sinVal, -1, 1, 100,200));
    

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

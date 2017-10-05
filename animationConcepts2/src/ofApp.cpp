#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 100; i++){
        catchUps[i].set(300,300);
    }
   
}

//--------------------------------------------------------------
void ofApp::update(){

    ofPoint mouse(mouseX, mouseY);
    
    catchUps[0] = 0.9 * catchUps[0]  + 0.1 * mouse;
    for (int i = 1; i < 100; i++){
        catchUps[i] = 0.9 * catchUps[i] + 0.1 * catchUps[i-1];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    for (int i = 0; i < 100; i++){
        ofCircle(catchUps[i], 10);
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

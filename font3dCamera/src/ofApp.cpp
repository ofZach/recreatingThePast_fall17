#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("helvetica.otf", 100);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    string myString = "Hello";

    ofRectangle rect = font.getStringBoundingBox(myString, 0,0);

    //cam.enableOrtho();
    
    cam.begin();
    
    for (int i = 0; i < 10; i++){
        ofPushMatrix();
        ofTranslate(0,0,i*20);
        font.drawString(myString, -rect.width *0.5, -rect.height*0.5);
        ofPopMatrix();
    }
    cam.end();
    
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

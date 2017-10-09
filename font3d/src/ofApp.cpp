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
    
    //ofRotateX(ofGetElapsedTimef() * 30);
    
    //ofEnableDepthTest();
    //ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    string myString = "This stands as\na sketch for\nthe future";
    
    ofRectangle rect = font.getStringBoundingBox(myString, 200,200);
    
    for (int i = 0; i < 3; i++){
        ofPushMatrix();
        ofTranslate(200,200);
        ofRotateY(ofGetElapsedTimef() * 30 + i*20);
        font.drawString(myString, 0, 0);
        ofPopMatrix();
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

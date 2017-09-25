#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    time = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (ofGetMousePressed()){
        time = time + ofGetLastFrameTime();
    }

    ofBackground(0);
    
    float x = ofGetWidth()/2 + 200 * cos(time*3.7);
    float y = ofGetHeight()/2 + 200 * sin(time*2.1);
    
    myLine.addVertex(x,y);
    
    if (myLine.size() > 2200){
        myLine.getVertices().erase(myLine.getVertices().begin());
    }
    
    myLine.draw();
    
    
    
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

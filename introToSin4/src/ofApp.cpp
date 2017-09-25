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
    
    // circle formula:
    // x = xorig + r * cos(angle);
    // y = yorig + r * sin(angle);
    
//    float inner =  ofMap(sin(ofGetElapsedTimef()*10.7), -1, 1, 0,500);
//    float outer =  ofMap(sin(ofGetElapsedTimef()*3.0), -1, 1, 0,500);
    
    
    //float xAdder =  ofMap(sin(ofGetElapsedTimef()*4.5), -1, 1, -300,300);
//    
    float radius =  ofMap(sin(ofGetElapsedTimef()*13.8), -1, 1, 100,300);
    
    float x =  mouseX + radius * cos(ofGetElapsedTimef());
    float y = mouseY + radius * sin(ofGetElapsedTimef());
    
    myLine.addVertex(x,y);
    
    if (myLine.size() > 200){
        myLine.getVertices().erase(myLine.getVertices().begin());
    }
    
    myLine.draw();
    //ofDrawCircle(x, y, 10);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    myLine.clear();
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

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    panel.setup();
    group.add(radius.set("radius", 100, 0, 1000));
    group.add(xPos.set("xPos", 200, 0, 500));
    group.add(resolution.set("resolution", 20, 3, 100));
    group.add(backgroundColor.set("backgroundColor", 0,0,255));
    
    panel.add(group);
    
    panel.loadFromFile("settings.xml");
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetCircleResolution(resolution);
    
   
    ofBackground(backgroundColor);
    
    ofCircle(xPos,400,radius);
    
    panel.draw();
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

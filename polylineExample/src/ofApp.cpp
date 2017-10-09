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
    
    
//    for (int i = 0; i < myLine.size(); i++){
//        myLine[i].x += ofRandom(-1,1);
//        myLine[i].y += ofRandom(-1,1);
//
//    }
    
    //myLine = myLine.getSmoothed(3);
    
    myLine.draw();
    
    ofPolyline resampled = myLine.getResampledBySpacing(20);
    
    for (int i = 0; i < resampled.size(); i++){
        ofCircle(resampled[i].x, resampled[i].y,10);
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
    myLine.addVertex( x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    myLine.clear();
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

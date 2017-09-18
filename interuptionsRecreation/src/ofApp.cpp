#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255);
    ofSetColor(0);
    
    ofSeedRandom(mouseX);
    
    for (int i = 0; i < 40; i++){
        for (int j = 0; j < 40; j++){
            
            //if (ofRandom(0,1) < 0.7){
            
                ofPoint pos = ofPoint(i*20 + 10, j*20 + 10);
                ofPushMatrix();
                    ofTranslate(pos.x, pos.y);
                    ofRotateZ(ofRandom(-180,180));
                    ofPoint a =  -ofPoint(20,0);
                    ofPoint b =  ofPoint(20,0);
                    if (ofNoise(i*0.1, j*0.1, mouseY*0.1) < 0.8){
                    ofDrawLine(a,b);
                    }
                ofPopMatrix();
            
            //}
            
        }
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

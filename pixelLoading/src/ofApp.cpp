#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    horseImg.load("horse.png");
    horseImg.setImageType(OF_IMAGE_GRAYSCALE);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    //horseImg.draw(0,0);
    
    // disneyland :)
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
//    ofSetColor(255);
//    for (int i = 0; i < horseImg.getWidth(); i += 10){
//        for (int j = 0; j < horseImg.getHeight(); j += 10){
//            ofColor c = horseImg.getColor(i, j);
//            float bright = c.getBrightness();
//
//            //float radius = ofMap(bright, 0, 255, 0, 5);
//            //ofDrawCircle(i + horseImg.getWidth(), j, radius);
//
//            ofPushMatrix();
//            ofTranslate(i,j);
//            ofRotateZ(  ofMap(bright, 0, 255, 0, mouseX));
//            ofLine(-5, 0, 5, 0);
//            //ofDrawRectangle(0,0, 10, 1);
//            ofPopMatrix();
//
//            //cout << bright << endl;
//        }
//    }
    
    
    // detroit!
    
    unsigned char * data = horseImg.getPixels().getData();
    
    for (int i = 0; i < horseImg.getWidth(); i+=10){
        for (int j = 0; j < horseImg.getHeight(); j+=10){
         
            // y * w + x;
            int index = j* horseImg.getWidth() + i;
            int brightness = data[index];
            ofDrawCircle(i, j, ofMap(brightness, 0, 255, 0, 5));
            // data[0];
            // data[10];
            
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

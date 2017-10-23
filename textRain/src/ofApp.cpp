#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640, 480);
    
    grayscale.allocate(640, 480, OF_IMAGE_GRAYSCALE);
    
    threshold.allocate(640, 480, OF_IMAGE_GRAYSCALE);

    for (int i = 0; i < 100; i++){
        ofPoint tempPt;
        tempPt.x = ofRandom(0,640);
        tempPt.y = 0;
        pts.push_back(tempPt);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    
    for (int i = 0; i < 640; i++){
        for (int j = 0; j < 480; j++){
            ofColor c = grabber.getPixels().getColor(i,j);
            grayscale.setColor(i, j, c);
        }
    }
    grayscale.update();
    
    for (int i = 0; i < 640; i++){
        for (int j = 0; j < 480; j++){
            ofColor c = grayscale.getColor(i,j);
            if (c.r < mouseX){
                threshold.setColor(i, j, ofColor::black);
            } else {
                threshold.setColor(i, j, ofColor::white);
                
            }
        }
    }
    threshold.update();
    
    for (int i = 0; i < pts.size(); i++){
        pts[i].y += 2;
        if (pts[i].y > 480){
            pts[i].y = 0;
        }
        
        // am I on top of a white pixel or not?
        
        ofColor c = threshold.getColor(pts[i].x, pts[i].y);
        if (c.r == 255){
            // yay!  do nothing! so happy
        } else {
            
            for (int j = pts[i].y; j >= 0; j--){
                if (threshold.getColor(pts[i].x, j).r == 255){
                    // yay! we found white;
                    pts[i].y = j;
                    break;
                }
            }
            
        }

    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    grayscale.draw(0,0);
    threshold.draw(640, 0);
    
    ofSetColor(255,0,0);
    for (int i = 0; i < pts.size(); i++){
        ofDrawCircle(pts[i].x, pts[i].y, 3);
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

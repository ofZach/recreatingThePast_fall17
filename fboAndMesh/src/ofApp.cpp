#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    myFbo.allocate(500,500, GL_RGBA);
    
    grabber.setup(1280, 720);
    
    //myFbo2.allocate(500,500, GL_RGBA);
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
//    myFbo.begin();
//    ofClear(0,0,0,255);
//    ofSetColor(255);
//    ofDrawCircle(250,250,100);
//    myFbo.end();
    
////    myFbo2.begin();
////    ofClear(0,0,0,255);
////    for (int i = 0; i < 10000; i++){
////        ofSetColor(ofRandom(0,255),
////                   ofRandom(0,255),
////                   ofRandom(0,255));
////        ofLine(ofRandom(0,500),
////               ofRandom(0,500),
////               ofRandom(0,500),
////               ofRandom(0,500));
////    }
////    myFbo2.end();
////
////    myFbo2.getTexture().setAlphaMask(myFbo.getTexture());
////
//    ofSetColor(255);
//
//    myFbo.draw(mouseX, mouseY);
    
    
    //ofDrawRectangle(50,50, 100, 100);
    
//    ofMesh myMesh;
//    myMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
//    myMesh.addVertex(ofPoint(50,50));
//    myMesh.addColor(ofColor::pink);
//
//    myMesh.addVertex(ofPoint(50,150));
//    myMesh.addColor(ofColor::red);
//
//    myMesh.addVertex(ofPoint(150,50));
//    myMesh.addColor(ofColor::green);
//
//    myMesh.addVertex(ofPoint(150,150));
//    myMesh.addColor(ofColor::darkBlue);
//    
    
//    myMesh.draw();
    
    //line.draw();
    
//    ofMesh myMesh;
//    myMesh.setMode(OF_PRIMITIVE_LINE_STRIP);
//    for (int i = 0; i < line.size(); i++){
//        float pct = ofMap(i, 0, line.size(), 0, 1);
//
//        myMesh.addVertex(line[i]);
//        myMesh.addColor(ofColor(255,255,255,255*pct));
//    }
//    myMesh.draw();
    
    ofMesh myMesh;
    myMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    float distance = 0;
    
    float time = ofGetElapsedTimef();
    
    for (int i = 0; i < line.size(); i++){
        
        
        int i_m_1 = MAX(i-1,0);
        int i_p_1 = MIN(i+1,line.size()-1);
        ofPoint a = line[i_m_1];
        ofPoint b = line[i_p_1];
        
        distance += (line[i] - a).length();
        
        ofPoint diff = b-a;
        diff.normalize();
        diff.rotate(90, ofPoint(0,0,1));
        myMesh.addVertex( line[i] + diff * 100);
        myMesh.addVertex( line[i] - diff * 100);
        
        myMesh.addColor(ofColor::white);
        myMesh.addColor(ofColor::white);
        
        float x = 1280/2 + (1280/2 * sin(distance * ofMap(sin(time), -1, 1, 0.01, 0.001) + time*1.0));
        myMesh.addTexCoord(  grabber.getTexture().getCoordFromPoint(x, 0)   );
        myMesh.addTexCoord(  grabber.getTexture().getCoordFromPoint(x, 720)   );
        
        //myMesh.addVertex(line[i]);
        //myMesh.addColor(ofColor(255,255,255,255*pct));
    }
    grabber.getTexture().bind();
    
    myMesh.draw();
    grabber.getTexture().unbind();
    
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

    line.addVertex(x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    line.clear();
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

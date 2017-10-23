#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    mix.allocate(640, 360, OF_IMAGE_COLOR);
    
    
    ofDirectory dir;
    dir.listDir("images");
    cout << dir.size() << endl;
    
    int pixelSum[ 640 * 360 * 3];
    
    // detroit :)
    for (int i = 0; i < 640*360*3; i++){
        pixelSum[i] = 0;
    }
    
    for (int i = 0; i < dir.size(); i++){
        cout << "loading: " << dir.getPath(i) << endl;
        ofImage temp;
        temp.setUseTexture(false);
        temp.load(dir.getPath(i));
        
        for (int j = 0; j < 640; j++){
            for (int k = 0; k < 360; k++){
                ofColor c = temp.getColor(j,k);
                int index = (k * 640 + j)*3;   // funky math //
                pixelSum[index] += c.r;
                pixelSum[index+1] += c.g;
                pixelSum[index+2] += c.b;
            }
        }
        cout << "pixel sum of red for pixel 0 " << pixelSum[0] << endl;
        
    }
    
    
    for (int i = 0; i < 640; i++){
        for (int j = 0; j < 360; j++){
            
            ofColor c;
            int index = (j*640 + i) * 3;
            c.r = (float)pixelSum[index] / (float)dir.size();
            c.g = (float)pixelSum[index+1] / (float)dir.size();
            c.b = (float)pixelSum[index+2] / (float)dir.size();
            mix.setColor(i,j, c);
            
        }
    }
    
    mix.update();
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    mix.draw(0,0);
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

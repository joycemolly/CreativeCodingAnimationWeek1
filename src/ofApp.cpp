#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(ofColor::honeyDew);
    
    
    
    for(int i =0;i<100;i++){
        manyPoints.push_back(ofPoint(i*100,i*100));
        manyPoints[i].x = ofRandom(0,1000);
        manyPoints[i].y = ofRandom(0,1000);

        
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
 
    for(int i =0; i<manyPoints.size();i++){
        
            float nPct = .01*(i+1);
            float mPct = inExpo(nPct);
            manyPoints[i].x = (1-mPct)*manyPoints[i].x+mPct*(ofRandom(mouseX-100,mouseX+100));
            manyPoints[i].y = (1-mPct)*manyPoints[i].y+mPct*(ofRandom(mouseY-100,mouseY+100));
            
        }
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(ofColor::lightSalmon);
    for(int i =0;i<manyPoints.size();i++){
        ofDrawCircle(manyPoints[i], 5);
    }

}


float ofApp::inExpo(float t){
    return (t == 0) ? 0 : pow(2, 10 * (t - 1));
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

#pragma once

#include "ofMain.h"
#include "ofxLeapMotion.h"
#include "ofxStrip.h"

class testApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
	
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    
    /*
     * For Reading Image File.
     */
    ofImage myImage; //画像ファイルより読みこまれたイメージデータ
    ofImage grabbedImage; //画面をキャプチャーしたイメージデータ
    /*
     * 小峰2
     */
    ofImage myImage_2;
    
    
    
    
    void gotMessage(ofMessage msg);
    void exit();
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
	vector <int> fingersFound; 
	ofEasyCam cam;
	ofLight l1;
	ofLight l2;
	ofMaterial m1;
	
	map <int, ofPolyline> fingerTrails;
};
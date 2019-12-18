#include "ofMain.h"
#include "testApp.h"
//#include "ofAppGlutWindow.h" // Deprecated -R4to0 (18 December 2019)

//========================================================================
int main( ){

    //ofAppGlutWindow window; // Deprecated -R4to0 (18 December 2019)
	//ofSetupOpenGL(&window, 480,720, OF_WINDOW);			// <-------- setup the GL context
	ofSetupOpenGL(480, 720, OF_WINDOW); // -R4to0 (18 December 2019)

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());

}

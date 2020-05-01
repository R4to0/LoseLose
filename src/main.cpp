#include "ofMain.h"
#include "testApp.h"
//#include "ofAppGlutWindow.h" // Deprecated -R4to0 (18 December 2019)
#include "globals.h"

// Initialize global vars -R4to0
bool g_destructive = false;
string g_slash = "/";

//========================================================================
int main(int argc, char* argv[]){

	// Parse arguments
	for( int i = 0; i < argc; ++i ) {
		std::string arg = argv[i];

		if (arg == "--destructive")
			g_destructive = true;
	}

#if defined (_WIN32)
	g_slash = "\\";
	//FreeConsole();
#endif

	// Window settings
	ofGLFWWindowSettings settings;
	settings.setSize(480, 720);
	settings.resizable = false;
	ofCreateWindow(settings);

    //ofAppGlutWindow window; // Deprecated -R4to0 (18 December 2019)
	//ofSetupOpenGL(&window, 480,720, OF_WINDOW);			// <-------- setup the GL context
	//ofSetupOpenGL(480, 720, OF_WINDOW); // -R4to0 (18 December 2019)

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	return ofRunApp( new testApp());
}

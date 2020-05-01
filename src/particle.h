#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
//#include "ofxVectorMath.h"
#include "ofVectorMath.h" // -R4to0 (18 December 2019)

class particle
{
    public:
        //ofxVec2f pos;
        //ofxVec2f oldPos;
        //ofxVec2f vel;
        //ofxVec2f frc;   // frc is also know as acceleration (newton says "f=ma")

        // -R4to0 (18 December 2019)
        ofVec2f pos;
        ofVec2f oldPos;
        ofVec2f vel;
        ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
			
        particle();
		virtual ~particle(){};

        void resetForce();
        void addForce(float x, float y);
        void addDampingForce();
        void setInitialCondition(float px, float py, float vx, float vy);
        void update();
        void draw();
	
		void bounceOffWalls();
	
	
		float damping;
		int size;
		int r;
		int g;
		int b;

    protected:
    private:
};

#endif // PARTICLE_H

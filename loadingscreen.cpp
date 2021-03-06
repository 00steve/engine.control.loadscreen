#include "loadingscreen.h"



LoadingScreen::LoadingScreen(){
}

LoadingScreen::~LoadingScreen(){
}


void LoadingScreen::Update(){
	EngineControl::Update();
}


void LoadingScreen::Draw(){
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(-1,0,0);
    glVertex3f(0,0,0);
    glColor3f(1,0,0);
    glVertex3f(0,0,0);
    glVertex3f(0,-1,0);
    glEnd();

    //glPushMatrix();
        /*
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluLookAt(0,0,30,0,0,0,0,1,0);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();


        */
		/*
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluPerspective( 65, 1.33, 1, 25 );
            gluLookAt(0, 							//cameara position x
					0, 								//cameara position y
					3, 								//cameara position z
					0,		//look position x
					0,  				//look position y
					0,  	//look position z
					0,				//up angle x
					1,							//up angle y
					0);			//up angle z
        glRotated(45,1,0,0);
        glRotated(rotation,0,1,0);*/


        double3 d = double3(1,1,1);
        glBegin(GL_TRIANGLE_FAN);


			glColor3f(d.x,d.y,d.z);
			glVertex3d(d.x*.5,d.y*.5,d.z*.5);
            glColor3f(d.x,d.y*-1,d.z);
			glVertex3d(d.x*.5,d.y*-.5,d.z*.5);



            glColor3f(d.x,d.y*-1,d.z*-1);
			glVertex3d(d.x*.5,d.y*-.5,d.z*-.5);
            glColor3f(d.x,d.y,d.z*-1);
			glVertex3d(d.x*.5,d.y*.5,d.z*-.5);
            glColor3f(d.x*-1,d.y,d.z*-1);
			glVertex3d(d.x*-.5,d.y*.5,d.z*-.5);
            glColor3f(d.x*-1,d.y,d.z);
			glVertex3d(d.x*-.5,d.y*.5,d.z*.5);
            glColor3f(d.x*-1,d.y*-1,d.z);
			glVertex3d(d.x*-.5,d.y*-.5,d.z*.5);

            glColor3f(d.x,d.y*-1,d.z);
			glVertex3d(d.x*.5,d.y*-.5,d.z*.5);
		glEnd();
        glColor3f(1,1,0);
		glBegin(GL_TRIANGLE_FAN);


            glColor3f(d.x*-1,d.y*-1,d.z*-1);
			glVertex3d(d.x*-.5,d.y*-.5,d.z*-.5);
            glColor3f(d.x*-1,d.y,d.z*-1);
			glVertex3d(d.x*-.5,d.y*.5,d.z*-.5);
            glColor3f(d.x,d.y,d.z*-1);
			glVertex3d(d.x*.5,d.y*.5,d.z*-.5);
            glColor3f(d.x,d.y*-1,d.z*-1);
			glVertex3d(d.x*.5,d.y*-.5,d.z*-.5);
            glColor3f(d.x,d.y*-1,d.z);
			glVertex3d(d.x*.5,d.y*-.5,d.z*.5);
            glColor3f(d.x*-1,d.y*-1,d.z);
			glVertex3d(d.x*-.5,d.y*-.5,d.z*.5);
            glColor3f(d.x*-1,d.y,d.z);
			glVertex3d(d.x*-.5,d.y*.5,d.z*.5);
            glColor3f(d.x*-1,d.y,d.z*-1);
			glVertex3d(d.x*-.5,d.y*.5,d.z*-.5);
		glEnd();
    //glPopMatrix();
}


void LoadingScreen::OnSetSettings(){

    if(Settings().IsSet("camera")){
        cout << " - want camera : " << Settings().get<string>("camera") << endl;
        GlobalRequest(Settings().get<string>("camera"));
    }
}

void LoadingScreen::OnGlobalRequest(Node* globalNodeRef,string name){
    cout << " - got asset " << name << " for loadscreen\n";
    if(name == "camera"){
        camera = (Camera*)globalNodeRef;
    }
}

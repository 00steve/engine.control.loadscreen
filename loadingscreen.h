
#ifndef LOADING_SCREEN_H
#define LOADING_SCREEN_H

#include <gl/glu.h>
#include <engine/core/enginecontrol.h>
#include <engine/core/double3.h>
#include <engine/graphics/camera.h>


class LoadingScreen : public EngineControl {
private:
    Camera* camera;
public:

    LoadingScreen();
    ~LoadingScreen();

	void Draw();
	void Update();

	void OnSetSettings();
	void OnGlobalRequest(Node* globalNodeRef,string name);
};


#endif // LOADING_SCREEN_H


#ifndef LOADING_SCREEN_H
#define LOADING_SCREEN_H

#include <gl/glu.h>
#include <engine/core/enginecontrol.h>
#include <engine/core/double3.h>
#include <engine/graphics/camera.h>


class LoadingScreen : public EngineControl {
private:
    Camera* camera;

protected:

    virtual void OnSetSettings();
	virtual void OnGlobalRequest(Node* globalNodeRef,string name);
public:

    LoadingScreen();
    ~LoadingScreen();

	void Draw();
	void Update();

};


#endif // LOADING_SCREEN_H

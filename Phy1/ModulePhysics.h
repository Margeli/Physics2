#pragma once
#include "Module.h"
#include "Globals.h"


#define GRAVITY_X 0.0f
#define GRAVITY_Y -7.0f

#define PIXELS_PER_METER 50.0f
#define METER_PER_PIXEL 0.02f

#define METER_TO_PIXELS(m) ((int) floor(PIXELS_PER_METER * m))
#define PIXELS_PER_METER(p) ((float) floor(METER_PER_PIXEL * p))

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:

	class b2World* world;

	bool debug;
};
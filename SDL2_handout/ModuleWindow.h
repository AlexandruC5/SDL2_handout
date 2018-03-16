#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__


struct SDL_Window;

class ModuleWindow : public Module {
private:
	SDL_Window* win;

public:

	bool Init();
	bool CleanUp();

	

};

// TODO 1: Create the declaration of ModuleWindow class

#endif // __ModuleWindow_H__
#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "../SDL2_handout/SDL/include/SDL.h"

bool ModuleWindow::Init() 
{


	int ok = SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2
	if (ok < 0) {
		LOG(SDL_GetError());
		return false;
	}
										   // Create an application window with the following settings:
	win = SDL_CreateWindow
	(
		"Window SDL Game",                  // window title
		SDL_WINDOWPOS_UNDEFINED,           // initial x position
		SDL_WINDOWPOS_UNDEFINED,           // initial y position
		640,                               // width, in pixels
		480,                               // height, in pixels
		SDL_WINDOW_OPENGL                  // flags - see below
	);

	return true;
}

bool ModuleWindow::CleanUp()
{
	SDL_DestroyWindow(win);
	SDL_Quit();
}





// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)


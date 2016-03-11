#include <vector>

#include "CApp.h"
#include "Game.h"
#include "Player.h"
#include "Hand.h"

CApp::CApp() {
}

void CApp::OnEvent(SDL_Event* event) {
  if(event->type == SDL_QUIT)
    running = false;
}

int CApp::OnExecute() {
  running = true;
 
  if(!OnInit()) {
    return -1;
  }

  SDL_Event event;

  while(running) {
    while(SDL_PollEvent(&event)) {
      OnEvent(&event);
    }

    OnLoop();
    OnRender();
  }

  OnCleanup();
  SDL_Quit();
  
  return 0;
}

bool CApp::OnInit() {
  bool success = true;

  if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
      printf("Error: Could not initialize SDL video. SDL_Error: %s\n", SDL_GetError());
      success = false;
    }
  else
    {
      window = SDL_CreateWindow("Poker", SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED, screenWidth,
				screenHeight, SDL_WINDOW_SHOWN );
      if(window==NULL) {
	printf("Error: Window not created. SDL_Error: %s\n", SDL_GetError());
	success = false;
      }
      else {
	surface = SDL_GetWindowSurface(window);
      }
    }

  image = SDL_LoadBMP("hello_world.bmp");
  if(surface==NULL) {
    printf("Error: Surface not loaded. SDL_Error: %s\n", SDL_GetError());
    success = false;
  }
  
  return success;
}

void CApp::OnLoop() {
}

void CApp::OnRender() {
  SDL_BlitSurface(image, NULL, surface, NULL);
  SDL_UpdateWindowSurface(window);
}

void CApp::OnCleanup() {
  SDL_FreeSurface(image);
  image = NULL;
  SDL_DestroyWindow(window);
  window = NULL;
}

int main() {
  CApp app;

  return app.OnExecute();
}

#include <vector>
#include <string>

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

  // load cards
  for(int i=0; i<13; i++) {
    std::string name = "Cards/s";
    if(i<9)
      name =  name + "0" + std::to_string(i+1) + ".bmp";
    else
      name = name + std::to_string(i+1) + ".bmp";
    cardBitmaps[i] = SDL_LoadBMP(name.c_str());

    if(cardBitmaps[i] == NULL) {
      printf("Error: Card %s not loaded. SDL_Error: %s\n", name.c_str(), SDL_GetError());
      success = false;
    }
  }
  
  return success;
}

void CApp::OnLoop() {
}

void CApp::OnRender() {
  SDL_BlitSurface(cardBitmaps[0], NULL, surface, NULL);
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

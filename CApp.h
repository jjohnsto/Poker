#ifndef _CAPP_H_
#define _CAPP_H_

#include <SDL2/SDL.h>

class CApp {
 private:
  bool running;

  int screenWidth = 512;
  int screenHeight = 480;

  SDL_Window* window = NULL;
  SDL_Surface* surface = NULL;

  /* Resources */
  SDL_Surface* image = NULL;
  SDL_Surface* cardBitmaps[13];
 public:
  CApp();

  int OnExecute();

  void OnEvent(SDL_Event* event);

  bool OnInit();

  void OnLoop();

  void OnRender();

  void OnCleanup();
};

#endif

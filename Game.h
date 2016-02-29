#ifndef _GAME_H_
#define _GAME_H_

#include <vector>

#include "Players.h"
#include "Hand.h"

class Game {
 private:
  std::vector<Player> Players;
  Hand hand;
  int stakes;
 public:
  Game();
  void AddPlayer();
  
};

#endif

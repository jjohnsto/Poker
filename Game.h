#ifndef _GAME_H_
#define _GAME_H_

#include <vector>

#include "Player.h"
#include "Hand.h"

class Game {
 private:
  std::vector<Player> players;
  Hand hand;
  int stakes;
 public:
  Game(std::vector<Player> players);
  void AddPlayer(Player p);
};

#endif

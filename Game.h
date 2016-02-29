#ifndef _GAME_H_
#define _GAME_H_

#include <vector>

#include "Player.h"
#include "Deque.h"

class Game {
 private:
  std::vector<Player> players;
  Deque deque;
  int stakes;
 public:
  Game(std::vector<Player> players);
  void AddPlayer(Player p);
  void PlayRound();
};

#endif

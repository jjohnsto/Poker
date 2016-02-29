#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
 private:
  std::string name;
  int bankroll;
  int moneyInGame;
 public:
  Player();
  void Fold();
  void Raise(int amount);
  void Check(int amount);
};

#endif

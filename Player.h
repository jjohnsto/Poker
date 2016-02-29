#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

#include <vector>

#include "Card.h"

class Player {
 private:
  std::string name;
  int bankroll;
  int moneyInGame;
  Card hand[2];
 public:
  Player();
  void Fold();
  void Raise(int amount);
  void Check(int amount);

  std::vector<Card> GetHand();
  void SetHand(Card Hand[2]);
};

#endif

#ifndef _HAND_H_
#define _HAND_H_

#include <vector>

#include "Card.h"

class Hand {
 private:
  std::vector<Card> Cards;
 public:
  Hand();
  void DrawFlop();
  void DrawTurn();
  void DrawRiver();
};

#endif

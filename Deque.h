#ifndef _DEQUE_H_
#define _DEQUE_H_

#include <deque>

#include "Card.h"

class Deque {
 private:
  std::deque<Card> cards;
 public:
  Deque();
  void Reset();
  void Shuffle();
  Card Draw();
};

#endif

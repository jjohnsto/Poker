#ifndef _DEQUE_H_
#define _DEQUE_H_

#include <deque>

#include "Card.h"

class Deque {
 private:
  std::deque<Card> Cards;
 public:
  Deque();
  void Reset();
  void Suffle();
  Card Draw();
};

#endif

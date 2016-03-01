#ifndef _CARD_H_
#define _CARD_H_

#include <string>
#include <sstream>
#include <iostream>

enum Suite { SPADES, CLUBS, HEARTS, DIAMONDS };

class Card {
 private:
  int rank; // 1 - Ace 13 - King
  Suite suite;
 public:
  Card();
  Card(int rank, Suite suite);
  std::string ToString();
};

#endif

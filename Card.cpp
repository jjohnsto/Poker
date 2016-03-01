#include "Card.h"

template <typename T>
std::string toString(T val)
{
  std::stringstream stream;
  stream << val;
  return stream.str();
}

Card::Card() {
}

Card::Card(int rank, Suite suite) {
  this->rank = rank;
  this->suite = suite;
}

std::string Card::ToString() {
  std::string csuite;
  if(suite == SPADES)
    csuite = "S";
  if(suite == CLUBS)
    csuite = "C";
  if(suite == HEARTS)
    csuite = "H";
  if(suite == DIAMONDS)
    csuite = "D";
  
  if(rank == 1)
    return "A" + csuite;
  if(rank > 1 && rank < 11)
    return toString(rank) + csuite;
  if(rank == 11)
    return "J" + csuite;
  if(rank == 12)
    return "Q" + csuite;
  if(rank == 13)
    return "K" + csuite;
}


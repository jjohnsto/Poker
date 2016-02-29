#include "Card.h"

Card::Card() {
}

Card::Card(int rank, Suite suite)
{
  this->rank = rank;
  this->suite = suite;
}

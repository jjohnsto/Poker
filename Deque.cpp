
#include "Deque.h"
#include "Card.h"

Deque::Deque() {
  Reset();
  Shuffle();
}

void Deque::Reset() {
  cards.clear();
  for(int i=0; i<4; i++)
    {
      for(int j=1; j<=14; j++)
	{
	  cards.push_back(Card(j, (Suite)i));
	}
    }
}

void Deque::Shuffle() {

}

Card Deque::Draw() {
  Card ret = cards.back();
  cards.pop_back();
  return ret;
}

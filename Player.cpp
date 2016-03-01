#include "Player.h"

Player::Player() {
  name = "Joel";
  bankroll = 100;
  moneyInGame = 100;
}

std::vector<Card> Player::GetHand() {
  std::vector<Card> ret;
  ret.push_back(hand[0]);
  ret.push_back(hand[1]);
  return ret;
}

void Player::SetHand(Card Hand[2]) {
  this->hand[0] = Hand[0];
  this->hand[1] = Hand[1];
}

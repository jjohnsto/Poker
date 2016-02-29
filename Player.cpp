#include "Player.h"

Player::Player() {
  name = "Joel";
  bankroll = 100;
  moneyInGame = 100;
}

void Player::SetHand(Card hand[2]) {
  this->hand[0] = hand[0];
  this->hand[1] = hand[1];
}

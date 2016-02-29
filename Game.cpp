#include <algorithm>

#include "Game.h"

Game::Game(std::vector<Player> players) {
  this->players = players;
}

void Game::AddPlayer(Player p) {
  players.push_back(p);
}

void Game::PlayRound() {
  deque.Reset();

  // deal cards
  for (int i=0; i<players.size(); i++)
    {
      Card hand[2];
      hand[0] = deque.Draw();
      hand[1] = deque.Draw();
      players[i].SetHand(hand);
    }
}

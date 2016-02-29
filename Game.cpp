
#include "Game.h"

Game::Game(std::vector<Player> players) {
  this->players = players;
}

void Game::AddPlayer(Player p) {
  players.push_back(p);
}

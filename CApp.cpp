#include <vector>

#include "CApp.h"
#include "Game.h"
#include "Player.h"
#include "Hand.h"

CApp::CApp() {
}

int CApp::OnExecute() {
  return 0;
}

int main() {
  Player player1;
  Player player2;
  Player player3;
  Player player4;
  std::vector<Player> players;
  players.push_back(player1);
  players.push_back(player2);
  players.push_back(player3);
  players.push_back(player4);
  
  Game game(players);

  while(game.PlayRound()) {

  }

  return 0;
}

#include <stdio.h>
#include <iostream>
#include "Game.h"

Game::Game(std::vector<Player> players) {
  this->players = players;
  stakes = 100;
}

void Game::AddPlayer(Player p) {
  players.push_back(p);
}

bool Game::PlayRound() {
  deque.Reset();
  inGame.clear();
  inGame = players;

  // deal cards
  for (int i=0; i<players.size(); i++)
    {
      Card hand[2];
      hand[0] = deque.Draw();
      hand[1] = deque.Draw();
      players[i].SetHand(hand);
    }

  //start bets
  int pot = StartBets(inGame, 0);
  if(pot < 0)
    return false;
  return true;
}

int Game::StartBets(std::vector<Player> players, int startPos)
{
  int bet = stakes;
  
  for(int i=0; i<players.size(); i++)
    {
      char action;
      
      int p = (startPos + i) % players.size();
      std::vector<Card> hand = players[p].GetHand();
      std::string card1 = hand[0].ToString();
      std::string card2 = hand[1].ToString();
      std::cout << "Player " << p << "\'s turn with cards: " << card1 << " " << card2 << std::endl;
      std::cout << "Bet: " << bet << ", r to raise, c to check, f to fold, q to quit.\n";

      scanf(" %c", &action);
      if(action == 'q')
      	return -1;
      }

  return stakes;
}

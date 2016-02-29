

poker: CApp.cpp CApp.h Game.o Card.o Deque.o Player.o Hand.o
	g++ CApp.cpp CApp.h Game.o Card.o Deque.o Player.o Hand.o  -o poker

Game.o : Game.cpp Game.h
	g++ -c Game.cpp -o Game.o

Card.o : Card.cpp Card.h
	g++ -c Card.cpp -o Card.o

Deque.o : Deque.cpp Deque.h
	g++ -c Deque.cpp -o Deque.o

Player.o : Player.cpp Player.h
	g++ -c Player.cpp -o Player.o

Hand.o : Hand.cpp Hand.h
	g++ -c Hand.cpp -o Hand.o

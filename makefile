
poker : Card.o Deque.o CApp.cpp CApp.h
	g++ CApp.cpp -o poker

Card.o : Card.cpp Card.h
	g++ -c Card.cpp Card.h -o Card.o

Deque.o : Deque.cpp Deque.h
	g++ -c Deque.cpp Deque.h -o Deque.o

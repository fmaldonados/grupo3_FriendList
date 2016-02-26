FriendList.exe:	friend.o main.o
	g++ friend.o main.o -lncurses
main.o:	main.cpp friend.cpp
	g++ -c main.cpp -lncruses

friend.o:	friend.cpp friend.h
	g++ -c friend.cpp

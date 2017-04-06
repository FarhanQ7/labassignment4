Cmad: Player.o Game.o
	g++ -std=c++11 Player.o Game.o -o Cmad

Player.o: Player.cpp Player.h
	g++ -std=c++11 -c Player.cpp

Game.o: Game.cpp Player.h Player.h
	g++ -std=c++11 -c Game.cpp
clean:
	rm -f *.o
	rm Cmad
run: Cmad
	./Cmad

prog: main.o
	g++ -std=c++11 -Wall -g main.o -o prog
	
main.o: tictactoe.cpp
	g++ -std=c++11 -Wall -g -c tictactoe.cpp

clean:
	rm *.o prog
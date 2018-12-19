main: Hobbit.o Spell.o Wizard.o main.cpp
	g++ -std=c++11 -static main.cpp Hobbit.o Spell.o Wizard.o -o main

Hobbit.o: Hobbit.cpp Hobbit.h
	g++ -std=c++11 -static -c Hobbit.cpp

Spell.o: Spell.cpp Spell.h
	g++ -std=c++11 -static -c Spell.cpp

Wizard.o: Wizard.cpp Wizard.h
	g++ -std=c++11 -static -c Wizard.cpp
	
run: main
	./main
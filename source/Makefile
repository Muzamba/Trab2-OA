tp2:	teste.o ArvoreB.o
	g++ teste.o ArvoreB.o -o tp2 -std=c++11

main.o:	teste.cpp
	g++ -c teste.cpp -std=c++11

ArvoreB.o: ArvoreB.cpp ArvoreB.h
	g++ -c ArvoreB.cpp -std=c++11

clean:
	rm *.o
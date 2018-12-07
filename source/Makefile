tp2:	main.o ArvoreB.o
	g++ main.o ArvoreB.o -o tp2

main.o:	main.cpp
	g++ -c main.cpp

ArvoreB.o: ArvoreB.cpp ArvoreB.h
	g++ -c ArvoreB.cpp

clean:
	rm *.o
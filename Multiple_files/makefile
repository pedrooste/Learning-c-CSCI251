#make file will create the whole project, this dosnt work though as it does not work in windows
printing:	printInput.o printingInput.o
	g++ printInput.o printingInput.o -o printing

printInput.o:	printInput.cpp
	g++ -c printInput.cpp

printingInput.o:	printingInput.cpp
	g++ -c printingInput.cpp

clean:
	rm *.o printing
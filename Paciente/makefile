all: paciente.exe

paciente.exe: main.o paciente.o
	g++ -o paciente.exe *.o

paciente.o: paciente.cc
	g++ -c paciente.cc

main.o: main.cc
	g++ -c main.cc

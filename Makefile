run: main
	./main.exe

main: main.cc src/generador.cc
	g++ main.cc src/generador.cc -o main.exe

.PHONY: main run
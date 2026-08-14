CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

main.exe: main.cc src/generador.cc include/generador.hh
	$(CXX) $(CXXFLAGS) main.cc src/generador.cc -o main.exe

main: main.exe

run: main.exe
	./main.exe

test: tests/test_generador.cc src/generador.cc include/generador.hh
	$(CXX) $(CXXFLAGS) tests/test_generador.cc src/generador.cc -o tests/test_generador.exe
	./tests/test_generador.exe

clean:
	rm -f main.exe tests/test_generador.exe

.PHONY: main run test clean

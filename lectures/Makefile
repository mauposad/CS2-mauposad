CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = bt.out

CPPFILES = bt.cpp

all:
	# g++ -c -g -Wall -std=c++17
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	# g++ -o functions.out *.o
	$(CXX) -o $(PROGRAM) *.o

clean:
	rm -f $(PROGRAM) *.o


run: 
	./$(PROGRAM)  

tests:
	./$(PROGRAM) test
CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: Board.o IllegalCharException.o IllegalCoordinateException.o BoardMem.o
	$(CXX) $(CXXFLAGS) Board.o
	
IllegalCharException.o: IllegalCharException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
BoardMem.o: BoardMem.cpp
	$(CXX) $(CXXFLAGS) -c BoardMem.cpp -o BoardMem.o
	
Board.o: Board.cpp Board.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o

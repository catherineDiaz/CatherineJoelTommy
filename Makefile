CXX = g++

CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: test

clean:
	rm test Math.o

test: Math.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp Math.o -o test

cov: Math.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp Math.o -o test

Math: Math
	$(CXX) $(CXXFLAGS) -c Math.cpp

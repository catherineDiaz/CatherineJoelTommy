CXX = g++

CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: test

clean:
	rm test test.gc* Math_utils.o

test: Math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp Math_utils.o -o test

cov: Math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp Math_utils.o -o test

Math_utils: Math_utils
	$(CXX) $(CXXFLAGS) -c Math_utils.cpp

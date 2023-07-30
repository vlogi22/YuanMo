
CXXFLAGS = -std=c++17 -pedantic -Wall -Wextra -ggdb -Wno-unused-parameter

SRC_CPP = $(shell find -name \*.cpp)
OFILES = $(SRC_CPP:%.cpp=%.o)

all: $(OFILES) $(SRC_CPP) main

%.o:: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

main: $(OFILES)
	$(CXX) -o $@ $^

clean:
	$(RM) $(OFILES) main

depend:
	$(CXX) -MM $(CXXFLAGS) $(SRC_CPP) > .makedeps

-include .makedeps

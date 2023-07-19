
CXXFLAGS = -std=c++17 -pedantic -Wall -Wextra -ggdb -Wno-unused-parameter

SRC_CPP = $(shell find -name \*.cpp)
OFILES = $(SRC_CPP:%.cpp=%.o)

%.o:: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(OFILES) $(SRC_CPP)

clean:
	$(RM) *.o $(OFILES) $(L_NAME).cpp

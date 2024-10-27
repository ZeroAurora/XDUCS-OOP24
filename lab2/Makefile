CXX := clang++
CXXFLAGS := -Wall -Wextra -g -Og --std=c++11

targets := people student dog account

all: $(targets)

$(targets): % : %.cpp

clean:
	rm -f $(targets)

.PHONY: all clean

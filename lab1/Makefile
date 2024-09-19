CXX := clang++
CXXFLAGS := -Wall -Wextra -g -Og --std=c++11

targets := max sort_int sort_overload sort_template

all: $(targets)

$(targets): % : %.cpp

clean:
	rm -f $(targets)

.PHONY: all clean

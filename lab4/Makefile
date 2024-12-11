CXX := clang++
CXXFLAGS := -Wall -Wextra -g -Og --std=c++11

targets := persons teacher_cadre shapes

all: $(targets)

$(targets): % : %.cpp

clean:
	rm -f $(targets)

.PHONY: all clean

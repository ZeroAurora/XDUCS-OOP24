CXX := clang++
CXXFLAGS := -Wall -Wextra -g -Og --std=c++11

targets := student_list complex matrix datetime

all: $(targets)

$(targets): % : %.cpp

clean:
	rm -f $(targets)

.PHONY: all clean

CXX=g++
CXXFLAGS=-std=c++14 -Wall

RULE: DEPENDENCIES
	COMMAND 1
	COMMAND 2
	...

clean:
	$(RM) test ../catch/catch.o

test: test.cpp ../catch/catch.o function.cpp
	#$(CXX) $(CXXFLAGS) test.cpp ../catch/catch.o -o test
	$(CXX) $(CXXFLAGS) $^ -o $@
	./$@

main: nasty.cpp student.o
	$(CXX) $(CXXFLAGS) -o $@ $^

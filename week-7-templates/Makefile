CXX = g++
CXXFLAGS = -Wall
test-utils: test/test-utils.cpp ../catch/catch.o utils.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success
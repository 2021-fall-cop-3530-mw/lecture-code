CXX = g++
CXXFLAGS = -Wall
test-utils: test/test-utils.cpp ../catch/catch.o utils.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success

test-node: test/test-node.cpp ../catch/catch.o node.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success

test-list: test/test-list.cpp ../catch/catch.o node.o list.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success
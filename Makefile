CXX=g++
CXXFLAGS=-Wall -pedantic -g -std=c++11
OBJS=ebnf_checker.o lexer.o lexical_token.o location.o
BIN=ebnf-checker
DEPS=ebnf_checker.hpp lexer.hpp token.hpp lexical_token.hpp location.hpp

all: $(BIN)

ebnf-checker: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(BIN)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm ebnf-checker

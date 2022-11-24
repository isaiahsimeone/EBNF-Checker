#include "lexer.hpp"

Lexer::Lexer(std::ifstream& grammar) {
    // Read the file into memory and close it
    std::cout << "INITIALISED LEXER" << std::endl;

    std::stringstream buffer;
    buffer << grammar.rdbuf();
    std::cout << buffer.str() << std::endl;
}

/*
 * Return the next token in the stream of tokens
 */
LexicalToken* Lexer::get_next_token() {
    return new LexicalToken(END_OF_FILE, new Location(0,0));
}
#include "lexer.hpp"

Lexer::Lexer(std::ofstream& grammar) {
    // Read the file into memory and close it
    std::cout << "INITIALISED LEXER" << std::endl;
}

/*
 * Return the next token in the stream of tokens
 */
LexicalToken* Lexer::get_next_token() {
    return new LexicalToken(END_OF_FILE, new Location(0,0));
}
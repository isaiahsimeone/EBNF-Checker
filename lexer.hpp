#ifndef H_LEXER
#define H_LEXER

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "token.hpp"
#include "location.hpp"
#include "lexical_token.hpp"

class Lexer {
    private:
        std::string symbols;
    public:
        Lexer(std::ifstream&);
        LexicalToken* get_next_token();
};

#endif /* H_LEXER */
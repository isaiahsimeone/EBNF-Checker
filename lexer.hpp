#ifndef H_LEXER
#define H_LEXER

#include <iostream>
#include <fstream>

#include "token.hpp"
#include "location.hpp"
#include "lexical_token.hpp"

class Lexer {
    private:
    
    public:
        Lexer(std::ofstream&);
        LexicalToken* get_next_token();
};

#endif /* H_LEXER */
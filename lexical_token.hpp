#ifndef H_LEXICAL_TOKEN
#define H_LEXICAL_TOKEN

#include "location.hpp"
#include "token.hpp"

class LexicalToken {
    private:
        Token type;
        Location* loc;
    public:
        LexicalToken(Token, Location*);
        Token       get_type();
        Location*   get_location();
        bool        matches(Token);
};

#endif /* H_LEXICAL_TOKEN */
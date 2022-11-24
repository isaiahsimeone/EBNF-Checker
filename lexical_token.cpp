#include "lexical_token.hpp"

LexicalToken::LexicalToken(Token type, Location* loc) {
    this->type = type;
    this->loc = loc;
}

Token LexicalToken::get_type() {
    return type;
}

Location* LexicalToken::get_location() {
    return loc;
}
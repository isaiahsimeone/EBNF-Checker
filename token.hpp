#ifndef H_TOKEN
#define H_TOKEN

enum Token {
    END_OF_FILE = -1,
    EQUALS = '=',
    CONCAT = ',',
    TERMINATE = ';',
    ALTERNATE = '|',
    LPAREN_SQUARE = '[',
    RPAREN_SQUARE = ']',
    LPAREN_CURLY = '{',
    RPAREN_CURLY = '}',
    LPAREN = '(',
    RPAREN = ')',
    QUOTE_DOUBLE = '"',
    QUOTE_SINGLE = '\''
};

#endif /* H_TOKEN */
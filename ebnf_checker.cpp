#include "ebnf_checker.hpp"

using namespace std;

int main(int argc, char** argv) {
    /* Get options */

    cout << "HELLO" << endl;

    ofstream source("source.txt");

    /* Convert the source file to a token stream */
    Lexer* lexer = new Lexer(source);

}
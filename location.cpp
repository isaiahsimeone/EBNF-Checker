#include "location.hpp"

Location::Location(int row, int col) {
    this->row = row;
    this->col = col;
}

int Location::get_row() {
    return row;
}

int Location::get_col() {
    return col;
}
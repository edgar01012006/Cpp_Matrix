#include "Matrix.hpp"

void Matrix::set(size_t row, size_t col, double value) {
    if (isInBounds(row, col) == false) {
        return;
    }
    data_[row][col] = value;
}


    

#include "Matrix.hpp"

double Matrix::get(size_t row, size_t col) const {
    if (isInBounds(row, col) == false) {
        return -1;
    }
    return data_[row][col];
}

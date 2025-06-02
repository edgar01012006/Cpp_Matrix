#include "Matrix.hpp"

/*
    size_t is unsigned so we can't check negative values.
*/

bool Matrix::isInBounds(size_t row, size_t col) const {
    /*
    if (row < 0) {
        std::cout << "Invalid argument: Row is negative " << row << std::endl;
        return false;
    } else if (col < 0) {
        std::cout << "Invalid argument: Col is negative " << col << std::endl;
        return false;
    }
    */
    if (row > rows_ - 1) {
        std::cout << "Invalid argument: Row is too big " << row << " > " << rows_ - 1 << std::endl;
        return false;
    } else if (col > cols_ - 1) {
        std::cout << "Invalid argument: Col is too big " << col << " > " << cols_ - 1 << std::endl;
        return false;
    }
    return true;
}

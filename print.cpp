#include "Matrix.hpp"

void Matrix::print() const {
    if (data_ == nullptr) {
        return;
    }
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            std::cout << data_[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

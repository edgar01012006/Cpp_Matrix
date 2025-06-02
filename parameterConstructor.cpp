#include "Matrix.hpp"

Matrix::Matrix(size_t rows, size_t cols) {
    rows_ = rows;
    cols_ = cols;
    data_ = new double*[rows_];
    for (int i = 0; i < rows_; ++i) {
        data_[i] = new double[cols_];
    }
}

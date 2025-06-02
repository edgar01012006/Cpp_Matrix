#include "Matrix.hpp"

Matrix::~Matrix() {
    for (int i = 0; i < rows_; ++i) {
        delete[]data_[i];
    }
    delete[]data_;
    data_ = nullptr;
}

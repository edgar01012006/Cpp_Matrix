#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>

class Matrix {
    private:
            size_t rows_;
            size_t cols_;
            double** data_;
    public:
            Matrix();
            Matrix(size_t rows, size_t cols);
            ~Matrix();
            bool isInBounds(size_t row, size_t col) const;
            void set(size_t row, size_t col, double value);
            double get(size_t row, size_t col) const;
            size_t getRows() const;
            size_t getCols() const;
            void print() const;
};

#endif

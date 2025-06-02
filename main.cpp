#include "Matrix.hpp"

int main() {
    Matrix obj(3, 4);
    std::cout << "Rows = " << obj.getRows() << " Cols = " << obj.getCols() << std::endl;
    obj.set(0, 0, 1);
    obj.set(2, 3, 100);
    obj.set(8, 2, 0);
    obj.set(1, 2, 83);
    std::cout << obj.get(2, 3) << std::endl;
    obj.print();

}

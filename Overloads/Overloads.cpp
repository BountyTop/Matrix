#include "Overloads.hpp"

std::ostream &operator<<(std::ostream &os, const Matrix &matrix) {
    for (int i = 0; i < matrix.getSizeI(); ++i) {
        for (int j = 0; j < matrix.getSizeJ(); ++j) {
            os << matrix(i, j) << " ";
        }
        os << std::endl;
    }
    return os;
}



Matrix operator*(double k, const Matrix &matrix) {
    return matrix * k;
}

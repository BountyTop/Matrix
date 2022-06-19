#ifndef LABMATRIX_DIAGONALMATRIX_HPP
#define LABMATRIX_DIAGONALMATRIX_HPP

#include "Matrix.hpp"
class DiagonalMatrix: public Matrix{
DiagonalMatrix(int size, const std::vector<Triplet> &data);
explicit DiagonalMatrix(const std::vector<double>& data);
};


#endif //LABMATRIX_DIAGONALMATRIX_HPP

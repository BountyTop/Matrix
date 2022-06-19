#ifndef LABMATRIX_TOPTRIANGLEMATRIX_HPP
#define LABMATRIX_TOPTRIANGLEMATRIX_HPP

#include "Matrix.hpp"

class TopTriangleMatrix: public Matrix{
public:
    TopTriangleMatrix(int size, const std::vector<Triplet> &data);
};


#endif //LABMATRIX_TOPTRIANGLEMATRIX_HPP

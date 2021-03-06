#ifndef LABMATRIX_MATRIX_HPP
#define LABMATRIX_MATRIX_HPP

#include <vector>
#include <stdexcept>
#include <iostream>
#include "Triplet.hpp"
#include <cmath>

class Matrix {
private:
    int size_i;
    int size_j;

    void swap_rows(int i, int j);

    int colNonZero(int col) const;

    int triangulation();


protected:
    std::vector<double> elements;

public:
//    Matrix() = default;
    explicit Matrix(const std::string &FULL_PATH);

    Matrix(int i, int j);

    Matrix(int i, int j, const std::vector<Triplet> &data);

    double trace() const;

    double determinant() const;

    double frobeniusNorm() const;

    int rank() const;

    int getSizeI() const;

    int getSizeJ() const;

    double operator()(int i, int j) const;

    Matrix operator*(const Matrix &matrix) const;

    Matrix operator+(const Matrix &matrix) const;

    Matrix operator-(const Matrix &matrix) const;

    Matrix operator*(double k) const;

    Matrix adamarProduct(const Matrix &matrix) const;

    Matrix transpose() const;

    static Matrix buildIdentityMatrix(int size);

    Matrix reverseMatrix() const;

};


#endif //LABMATRIX_MATRIX_HPP

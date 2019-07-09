//
//  Matrix.cpp
//  MatrixCalculator
//
//  Created by Jonathan Vo on 7/8/19.
//  Copyright © 2019 Jonathan Vo. All rights reserved.
//

#include "Matrix.hpp"

#include <string.h>
#include <iostream>

Matrix::Matrix(int row, int col) {
    rows = row;
    columns = col;
    size = rows * columns;
    elements = new int[size];
}

Matrix::Matrix(const Matrix& o) {
    rows = o.rows;
    columns = o.columns;
    size = o.size;
    elements = new int[size];
    memcpy(elements, o.elements, size * 4);
}

Matrix::~Matrix() {
    delete [] elements;
}

int Matrix::get(int row, int col) {
    return elements[((row-1) * (columns)) + (col)];
}

void Matrix::add(int value, int index) {
    elements[index] = value;
}

void Matrix::print() {
    if(size > 0) {
        for(int i = 0; i < size; i++) {
            std::cout << elements[i] << " ";
            if(i-1 % columns == 0) { std::cout << std::endl; }
        }
    } else {
        std::cout << "Matrix is empty" << std::endl;
    }
    std::cout << std::endl;
}

Matrix Matrix::operator+ (Matrix param) {
    if(rows == param.rows && columns == param.columns) {
        Matrix temp = Matrix(rows, columns);
        for(int i=0; i<rows*columns; i++) {
            temp.add(elements[i] + param.elements[i], i);
        }
        return temp;
    } else {
        return Matrix(0,0);
    }
}

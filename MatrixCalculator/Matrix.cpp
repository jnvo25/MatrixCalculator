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
    elements = new int[rows*columns];
}

Matrix::Matrix(const Matrix& o) {
    rows = o.rows;
    columns = o.columns;
    elements = new int[rows*columns];
    memcpy(elements, o.elements, 4 * sizeof *o.elements);
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
    for(int i = 0; i < rows*columns; i++) {
        std::cout << elements[i] << " ";
        if(i-1 % columns == 0) { std::cout << std::endl; }
    }
    std::cout << std::endl;
}



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
    
    pointerArray = new int*[rows];
    
    for(int i=0; i < rows; i++) {
        pointerArray[i] = new int[columns];
    }
}

Matrix::Matrix(const Matrix& o) {
    rows = o.rows;
    columns = o.columns;
    size = o.size;
    pointerArray = new int*[rows];
    
    for(int i=0; i<rows; i++) {
        pointerArray[i] = new int[columns];
        for(int j=0; j<columns; j++) {
            pointerArray[i][j] = o.pointerArray[i][j];
        }
    }
}

Matrix::~Matrix() {
    for(int i=0; i<rows; i++) {
        delete [] pointerArray[i];
    }
    delete [] pointerArray;

}

int Matrix::getElement(int row, int col) {
    return pointerArray[row][col];
}

void Matrix::setElement(int value, int row, int col) {
    pointerArray[row][col] = value;
}

void Matrix::print() {
    if(size > 0) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                std::cout << pointerArray[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Matrix is empty" << std::endl;
    }
    std::cout << std::endl;
}

Matrix Matrix::operator+ (Matrix param) {
    if(rows == param.rows && columns == param.columns) {
        Matrix temp = Matrix(rows, columns);
        for(int i=0; i<rows; i++) {
            for(int j=0; j<columns; j++) {
                temp.setElement(getElement(i,j) + param.getElement(i,j), i, j);
            }
        }
        return temp;
    } else {
        std::cout << "Matrixes incompatibile for addition." << std::endl;
        return Matrix(0,0);
    }
}

Matrix Matrix::operator* (Matrix param) {
    if(columns == param.rows) {
        Matrix temp = Matrix(rows, param.columns);
        for(int rowInA=0; rowInA < rows; rowInA++ ) {
            for(int colInB=0; colInB < param.columns; colInB++) {
                int dotProduct = 0;
                for(int i=0; i < columns; i++) {
                    dotProduct += getElement(rowInA, i) * param.getElement(i, colInB);
                }
                
                temp.setElement(dotProduct, rowInA, colInB);
            }
        }
        return temp;
    } else {
        std::cout << "Matrixes incompatibile for multiplication." << std::endl;
        return Matrix(0,0);
    }
}

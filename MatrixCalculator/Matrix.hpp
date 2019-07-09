//
//  Matrix.hpp
//  MatrixCalculator
//
//  Created by Jonathan Vo on 7/8/19.
//  Copyright © 2019 Jonathan Vo. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>

class Matrix {
public:
    // Constructor (sets dimensions)
    Matrix(int, int);
    
    // Copy constructor
    Matrix(const Matrix& o);
    
    // Destructor
    ~Matrix();
    
    // Add element to matrix
    void setElement(int, int, int);
    
    void print();
    
    Matrix operator+ (Matrix);
    Matrix operator- (Matrix);
    Matrix operator* (Matrix);
    
private:
    int rows;
    int columns;
    int size;
    int** pointerArray;
    
    // Get Element from matrix (row, column)
    int getElement(int, int);
};


#endif /* Matrix_hpp */

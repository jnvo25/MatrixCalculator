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
    
    // Get Element from matrix (row, column)
    int get(int, int);
    
    // Add element to matrix
    void add(int, int);
    
    void print();
    
    Matrix operator+ (Matrix);
    
private:
    int rows;
    int columns;
    int size;
    int* elements;
};


#endif /* Matrix_hpp */

//
//  main.cpp
//  MatrixCalculator
//
//  Created by Jonathan Vo on 7/8/19.
//  Copyright © 2019 Jonathan Vo. All rights reserved.
//

#include <iostream>
#include "Matrix.hpp"

int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned int> (time(0)));
    std::cout << "Matrix Calculator" << std::endl;
    
    Matrix matrix1{2,2};
    Matrix matrix2{2,2};
    
    // Fill new matrix
    int a=1, b=1;
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            matrix1.setElement(a++, i, j);
            matrix2.setElement(b++, i, j);
        }
    }

    std::cout << "Matrix 1" << std::endl;
    matrix1.print();

    std::cout << "Matrix 2" << std::endl;
    matrix2.print();

    std::cout << "Matrix1 + Matrix2" << std::endl;
    Matrix matrix3 = matrix1 + matrix2;
    matrix3.print();
    
    std::cout << "Matrix1 * Matrix2" << std::endl;
    Matrix matrix4 = matrix1 * matrix2;
    matrix4.print();
    
    return 0;
}

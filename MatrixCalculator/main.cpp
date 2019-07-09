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
    
    
    int rowSize1, colSize1;
    std::cout << "Enter row size of first matrix" << std::endl;
    std::cin >> rowSize1;
    std::cout << "Enter column size of first matrix" << std::endl;
    std::cin >> colSize1;
    Matrix matrix1{rowSize1,colSize1};
    for(int i=0; i < rowSize1; i++) {
        for(int j=0; j < colSize1; j++) {
            int value;
            std::cout << "Enter element for row " << i << " col " << j << ":";
            std::cin >> value;
            matrix1.setElement(value, i, j);
        }
    }
    
    int rowSize2, colSize2;
    std::cout << "Enter row size of first matrix" << std::endl;
    std::cin >> rowSize2;
    std::cout << "Enter column size of first matrix" << std::endl;
    std::cin >> colSize2;
    Matrix matrix2{rowSize2,colSize2};
    for(int i=0; i < rowSize2; i++) {
        for(int j=0; j < colSize2; j++) {
            int value;
            std::cout << "Enter element for row " << i << " col " << j << ":";
            std::cin >> value;
            matrix2.setElement(value, i, j);
        }
    }
    
    std::cout << "Matrix 1:" << std::endl;
    matrix1.print();
    
    std::cout << "Matrix 2:" << std::endl;
    matrix2.print();
    
    char operation;
    std::cout << "Do you want to add (+), subtract (-), or multiply (x)?" << std::endl;
    std::cin >> operation;
    switch(operation) {
        case '+': (matrix1 * matrix2).print();
            break;
        case '-': (matrix1 * matrix2).print();
            break;
        case 'x': (matrix1 * matrix2).print();
            break;
        default:
            std::cout << "Unable to recognize symbol" << std::endl;
            
    }
    
    
    
    
    
    return 0;
}

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
    // insert code here...
    std::cout << "Matrix Calculator";
    
    Matrix newMatrix{2,2};
    
    // Fill new matrix
    for(int i=0; i<4; i++) {
        newMatrix.add(rand() & 100, i);
    }
    
    Matrix newerMatrix{newMatrix};
    
    std::cout << std::endl;
    
    newMatrix.print();
    newerMatrix.print();
    
    std::cout << std::endl;
    
    return 0;
}

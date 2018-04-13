//
//  math_utils.hpp
//  PE14
//
//  Created by Joel Davidson on 4/10/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#ifndef math_utils_hpp
#define math_utils_hpp

//#include <stdio.h>
#include <string>
//#include <cstring>
#include <iostream>
#include <vector>

struct QuadraticAnswer{
    double x1;
    double x2;
};

class Math {
public:
    static bool IsSquare(int num);
    static int GetDigit(int num, int place);
    static bool EqualParity(int x, int y);
    static bool EqualParity(std::vector<int> nums);
    static QuadraticAnswer solveQuadratic(int a, int b, int c);
};



#endif /* math_utils_hpp */

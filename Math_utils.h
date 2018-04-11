//
//  math_utils.hpp
//  PE14
//
//  Created by Joel Davidson on 4/10/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#ifndef math_utils_hpp
#define math_utils_hpp

#include <stdio.h>
#include <string>
#include <cstring>
#include <iostream>
#include <vector>


bool IsSquare(int num);
int GetDigit(int num, int place);
bool EqualParity(int x, int y);
bool EqualParity(std::vector<int> nums);
double solveQuadratic(int a, int b, int c);

#endif /* math_utils_hpp */

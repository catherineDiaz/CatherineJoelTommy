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

class Math {
public:
    static bool IsSquare(int num);
    static int GetDigit(int num, int place);
    static bool EqualParity(int x, int y);
    static bool EqualParity(std::vector<int> nums);
};



#endif /* math_utils_hpp */

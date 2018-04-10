//
//  math_utils.cpp
//  PE14
//
//  Created by Joel Davidson on 4/10/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#include "Math_utils.h"
#include <math.h>



/**
 
 Given a number, this function will return true if the number given is  a square and false if it is not
 
 @params num -> number to check if its a square
 
 */

bool IsSquare(int num)
{
    float root = sqrt(num);
    if(floor(root) == root)
    {
        // if the floor of the number is the same as the original then its a whole num
        return true;
    }
    else
    {
        return false;
    }
}

//return true iff both x and y have the same parity
bool EqualParity(int x, int y){
    return ((x<0 && y<0) || (x>0 && y>0));
}

//return true iff all elements of nums have the same parity
bool EqualParity(std::vector<int> nums){
    bool equal=true;
    if(nums.front()>0){
        for(auto &i : nums){
            equal = (i>0);
        }
    }else{
        for(auto &i : nums){
            equal = (i<0);
        }
    }
    return equal;
}

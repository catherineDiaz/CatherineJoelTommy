//
//  main.cpp
//  PE14
//
//  Created by Joel Davidson on 4/10/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#include <iostream>
#include "Math_utils.h"
#include <vector>
using namespace std;

int main() {
    int x = 1;
    int y = -1;
    int z = 1;
    vector<int> nums;
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    int p = Math::EqualParity(x, y);
    cout << "\nEqualParity should return 0 " << p;
    int q = Math::EqualParity(nums);
    cout << "\nEqualParity should return 0 " << q << endl;
    
    return 0;
}

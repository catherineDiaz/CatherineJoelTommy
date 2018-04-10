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
    vector<int> nums;
    nums.push_back(x);
    nums.push_back(y);
    int p = EqualParity(x, y);
    cout << "\nEqual parity returned " << p;
    int q = EqualParity(nums);
    cout << "\nEqual parity returned " << q << endl;
    
    return 0;
}

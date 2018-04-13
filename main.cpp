//
//  main.cpp
//  PE14
//
//  Created by Joel Davidson on 4/10/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#include <iostream>
#include "Math.h"
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
    
    int a = 1;
    int b = 3;
    int c = 2;
    
    QuadraticAnswer QA = Math::solveQuadratic(a, b, c);
    cout << "\nQuadratic solution x1 = " << QA.x1 << " x2 = " << QA.x2 << endl;
    
    return 0;
}

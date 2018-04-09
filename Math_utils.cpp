#include "math_utils.h"
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

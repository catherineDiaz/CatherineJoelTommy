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

/**

    Returns the digit at a place in the number.

    @params num -> number to extract the digit from. Should not overflow c++ int, i.e. be greater than 2147483647.
    @params place -> position in num from which a digit is extracted. Should be base 10. Can be negative.

**/
int GetDigit(int num, int place) {
    int digit = 0;
    if ((abs(place) == 1) || (abs(place) == 10) || ((place / 10) % 10 == 0)) {
        if (num % place == num) {
            throw std::invalid_argument("place not found in num");
        } else {
            digit = abs((num / place) % 10);
        }
    } else {
        throw std::invalid_argument("place should be base 10");
    }
//    catch (const std::invalid_argument& e) {
//        std::cerr << "Invalid argument: " << e.what() << endl;
    return digit;
}

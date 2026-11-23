/*
 * DATE: 18/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/plus-one/
 * PROBLEM STATEMENT: 1. Start the loop from the last index because addition
   starts from the ones place.

2. Use digits[i]++ to increase the current digit by 1.

3. If the digit is less than 10, no carry is needed.

4. If the digit becomes 10, replace it with 0
   and carry 1 to the previous digit.

5. Use return digits to stop the loop when addition
   is completed.

6. If all digits are 9, insert 1 at the beginning
   using digits.insert(digits.begin(), 1).

7. Never convert a large digit array into an integer
   because it may cause integer overflow.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--) {

            digits[i]++;

            if(digits[i] < 10) {
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};
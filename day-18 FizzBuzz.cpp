/*
 * DATE: 16/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/fizz-buzz/description/
 * PROBLEM STATEMENT: 
 *Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]
Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
 

Constraints:

1 <= n <= 104
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 * 1. Use a for loop to iterate from 1 to n.
 * 2. Use the modulus (%) operator to check divisibility.
 * 3. Check the condition i % 3 == 0 && i % 5 == 0 first.
 * 4. Use if-else if-else to handle multiple conditions.
 * 5. vector<string> stores multiple string values.
 * 6. Use to_string(i) to convert an integer into a string.
 * 7. Vector indexing starts from 0, so use i-1
 *    when the loop starts from 1.
 * 8. Use result[i-1] to store values without push_back().
 * 9. Return the complete vector after the loop.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> result(n);

        for(int i = 1; i <= n; i++) {

            if(i % 3 == 0 && i % 5 == 0) {
                result[i-1] = "FizzBuzz";
            }
            else if(i % 3 == 0) {
                result[i-1] = "Fizz";
            }
            else if(i % 5 == 0) {
                result[i-1] = "Buzz";
            }
            else {
                result[i-1] = to_string(i);
            }
        }
        return result;
    }
};

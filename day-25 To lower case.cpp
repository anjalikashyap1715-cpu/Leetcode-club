/*
 * DATE: 23/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/to-lower-case/description/
 * PROBLEM STATEMENT: 
 *Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
 
+
+Constraints:
+1 <= s.length <= 100
+s consists of printable ASCII characters.
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *A string is a collection of characters.
 Use a for loop to traverse each character.
tolower() converts uppercase letters into lowercase.
s[i] accesses a character at a particular index.
We can modify a string directly without creating another string.
Characters that are already lowercase remain unchanged.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        return s;
    }
};
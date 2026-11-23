/*
 * DATE: 20/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/first-unique-character-in-a-string/description/
 * PROBLEM STATEMENT: Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:
Input: s = "leetcode"
Output: 0
Explanation:
The character 'l' at index 0 is the first character that does not occur at any other index.
Example 2:
Input: s = "loveleetcode"
Output: 2
Example 3:
Input: s = "aabb"
Output: -1

 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *A frequency array can be used to count how many times each character appears.
int count[26] = {0} creates an array of 26 elements, initially set to zero.
s[i] - 'a' converts a lowercase character into an array index (0 to 25).
Use the first loop to count the frequency of every character.
Use the second loop to find the first character whose frequency is exactly 1.
Traverse the string from left to right to maintain the original order.
Return the index of the first non-repeating character
If no unique character exists, return -1
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
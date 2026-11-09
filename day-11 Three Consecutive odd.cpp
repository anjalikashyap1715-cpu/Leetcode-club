/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/three-consecutive-odds/description/
 * PROBLEM STATEMENT: Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.
Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *1. Odd number: num % 2 != 0.
2. Check three consecutive elements using i, i+1, i+2.
3. Use && when all three conditions must be true.
4. Return true if all three numbers are odd.
5. Otherwise, return false.

Time Complexity: O(n)
Space Complexity: O(1)
 * ----------------------------------------

 */

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0;i+2<arr.size();i++){
            if(arr[i]%2!=0&&
               arr[i+1]%2!=0&&
               arr[i+2]%2!=0){
                return true;
               }
        }
            
                return false;
            }   
        

    
};
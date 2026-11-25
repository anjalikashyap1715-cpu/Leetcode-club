/*
 * DATE: 25/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=array
 * PROBLEM STATEMENT: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:
Input: nums = [2,2,1]
Output: 1
Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
Example 3:
Input: nums = [1]
Output: 1
Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
 

 *
 * ----------------------------------------
 * 
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 * XOR is represented by the ^ operator in C++.
XOR of two same numbers is always 0.
XOR of any number with 0 gives the same number.
Duplicate elements cancel each other using XOR.
The remaining number is the single number.
XOR helps solve this problem without using extra arrays or sorting.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};
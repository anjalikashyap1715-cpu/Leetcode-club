/*
 * DATE: 14/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/move-zeroes/description/
 * PROBLEM STATEMENT: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 * * 1. Use two pointers i and j.
 * 2. i traverses the complete array.
 * 3. j tracks the position for the next non-zero element.
 * 4. Swap non-zero elements with nums[j].
 * 5. Increment j after every non-zero element.
 * 6. Time Complexity: O(n)
 * 7. Space Complexity: O(1)
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;


        for(int i =0;i<nums.size();i++){
            if (nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
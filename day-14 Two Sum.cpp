/*
 * DATE: 12/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/two-sum/description/
 * PROBLEM STATEMENT: You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

Example 2:

Input: nums = [3,2,4], target = 6

Output: [1,2]

Explanation:

The sum of nums[1] and nums[2] is 2 + 4 = 6, which equals the target. Therefore, the indices [1, 2] are returned.

Example 3:

Input: nums = [3,3], target = 6

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 3 + 3 = 6, which equals the target. Therefore, the indices [0, 1] are returned.

 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
1.Learned how to use vectors (vector<int>) to store multiple integers.
2.Understood that nums.size() returns the total number of elements in a vector.
3.Learned how to use nested for loops to check all possible pairs.
4.Understood the role of i and j in accessing two different array elements.
5.Learned that array indexing starts from 0.
6.Understood why we use j = i + 1 to avoid using the same element twice and checking duplicate pairs.
7.Learned how to use if conditions to compare the sum with the target.
8.Understood that return {i, j} returns the indices, not the actual values.
9.Learned to use < nums.size() instead of <= nums.size() to avoid out-of-bounds errors.
10.Understood the time complexity O(n²) of the brute-force approach * ----------------------------------------
 * 
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++){
         for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return{i,j};
            }
         }

        
            
        }
        return{};
    
}
    
};
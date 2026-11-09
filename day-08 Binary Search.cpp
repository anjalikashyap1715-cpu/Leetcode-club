/*
 * DATE: 06/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/binary-search/description/
 * PROBLEM STATEMENT: Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.
 *
 * ----------------------------------------
 
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
1. Learned the concept of Binary Search.
2. Binary Search works only on a sorted array.
3. Used three variables: left, right and mid.
4. If middle element equals target, return its index.
5. If middle element is smaller than target,
   search the right half.
6. If middle element is greater than target,
   search the left half.
7. If target is not found, return -1.
8. Time Complexity: O(log n)
   Space Complexity: O(1).
9. Binary Search reduces the search area by half
   in every iteration.
 * ----------------------------------------
 * 
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
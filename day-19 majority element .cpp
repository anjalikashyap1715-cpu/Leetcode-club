/*
 * DATE: 17/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/majority-element/description/
 * PROBLEM STATEMENT: Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 * * 1. Majority element appears more than n/2 times.
 * 2. Used Boyer-Moore Voting Algorithm.
 * 3. candidate stores the possible majority element.
 * 4. count tracks votes.
 * 5. Same element -> count++.
 * 6. Different element -> count--.
 * 7. If count == 0, choose a new candidate.
 * 8. Time Complexity: O(n)
 * 9. Space Complexity: O(1)
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(count == 0) {
                candidate = nums[i];
            }

            if(nums[i] == candidate) {
                count++;
            }
            else {
                count--;
            }
        }

        return candidate;
    }
};
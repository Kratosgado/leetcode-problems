/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

Constraints:
1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
   vector<vector<int>> solutions;

public:
   vector<vector<int>> fourSum(vector<int>& nums, int target) {
       if(nums.size() < 4) return solutions;
      std::sort(nums.begin(), nums.end());
      for (int i = 0; i < nums.size() - 3; i++) {
         for (int j = i + 1; j < nums.size() - 2; j++) {
            int left = j + 1;
            int right = nums.size() - 1;
            while (left < right) {
               long sum = (long)nums[i] + (long)nums[j] + (long)nums[left] + nums[right];
               if (sum == target) {
                  vector<int> selected = { nums[i], nums[j], nums[left], nums[right] };
                  if (std::find(solutions.begin(), solutions.end(), selected) == solutions.end())
                  solutions.push_back(selected);
                  left++;
                  right--;
               }
               else if (sum < target) left++;
               else right--;
            }
         }

      }
      return solutions;
   }
};


int main() {
   Solution s;
   vector<int> nums = { 1,0,-1,0,-2,2 };
   int target = 0;
   vector<vector<int>> result = s.fourSum(nums, target);
   for (vector<int> v : result) {
      for (int i : v) {
         cout << i << " ";
      }
      cout << endl;
   }
   Solution sol2;
   vector<int> num = { 2,2,2,2,2 };
   int target2 = 8;
   vector<vector<int>> result2 = sol2.fourSum(num, target2);
   for (vector<int> v : result2) {
      for (int i : v) {
         cout << i << " ";
      }
      cout << endl;
   }
   Solution sol;
   vector<int> num2 = { -493, -482, -482, -456, -427, -405, -392, -385, -351, -269, -259, -251, -235, -235, -202, -201, -194, -189, -187, -186, -180, -177, -175, -156, -150, -147, -140, -122, -112, -112, -105, -98, -49, -38, -35, -34, -18, 20, 52, 53, 57, 76, 124, 126, 128, 132, 142, 147, 157, 180, 207, 227, 274, 296, 311, 334, 336, 337, 339, 349, 354, 363, 372, 378, 383, 413, 431, 471, 474, 481, 492
   };
   int target3 = 6189;
   vector<vector<int>> result3 = sol.fourSum(num2, target3);
   if (result3.empty()) cout << "empty" << endl;
   for (vector<int> v : result2) {
      for (int i : v) {
         cout << i << " ";
      }
      cout << endl;
   }
   return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      for (int num : nums2)
      {
         nums1.push_back(num);
      }
      sort(nums1.begin(), nums1.end());

      return findMedian(nums1);
      // return findMedian();
   }

   double findMedian(vector<int>& nums) {
      int size = nums.size();
      cout << size;
      if (size % 2 == 0) {
         return (nums[size / 2] + nums[(size / 2) - 1]) / 2.0;
      }
      else {
         return nums[(size / 2)];
      }
   }
};

int main() {
   Solution s;
   vector<int> nums1 = { 1, 3 };
   vector<int> nums2 = { 2 };
   cout << s.findMedianSortedArrays(nums1, nums2);
   return 0;
}
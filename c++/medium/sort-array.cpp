#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
   vector<int> sortArray(vector<int>& nums) {
      mergeSort(nums, 0, nums.size() - 1);
      return nums;
   }

   void mergeSort(vector<int>& nums, int left, int right) {
      if (left < right) {
         int mid =  (right + left) / 2;
         mergeSort(nums, left, mid);
         mergeSort(nums, mid + 1, right);
         merge(nums, left, mid, right);
      }
   }

   void merge(vector<int>& nums, int left, int mid, int right) {
      vector<int> temp(right - left + 1);
      int tempCount = 0, lcount = left, rcount = mid + 1;
      while ((lcount <= mid) && (rcount <= right)) {
         if (nums[lcount] < nums[rcount]) {
            temp[tempCount++] = nums[lcount++];
         }
         else {
            temp[tempCount++] = nums[rcount++];
         }
      }
      if (lcount > mid)
         while (rcount <= right)
            temp[tempCount++] = nums[rcount++];
      else
         while (lcount <= mid)
            temp[tempCount++] = nums[lcount++];
      for (tempCount = 0; tempCount < temp.size(); tempCount++) 
         nums[left + tempCount] = temp[tempCount];
   }

};

int main() {
   Solution s;
   vector<int> nums = { 5,2,3,1, 4 };
   vector<int> result = s.sortArray(nums);
   for (int i : result) {
      cout << i << " ";
   }
   return 0;
}
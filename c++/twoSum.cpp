#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
   // with for loop
   vector<int> twoSum(vector<int>& nums, int target) {
      for (int i = 0; i < nums.size() - 1; i++) {
         for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
               return { i, j };
            }
         }
      }
      return {};
   }
   // vector<int> twoSum(vector<int>& nums, int target) {
   //    vector<int> result;
   //    unordered_map<int, int> hash;
   //    for (int i = 0; i < nums.size(); i++) {
   //       int numberToFind = target - nums[i];
   //       if (hash.find(numberToFind) != hash.end()) {
   //          result.push_back(hash[numberToFind]);
   //          result.push_back(i);
   //          return result;
   //       }
   //       hash[nums[i]] = i;
   //    }
   //    return result;
   // }
};
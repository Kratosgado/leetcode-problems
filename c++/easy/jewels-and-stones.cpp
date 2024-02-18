#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
   int numJewelsInStones(string jewels, string stones) {
      int count = 0;
      for (char c : stones) {
         if (jewels.find(c) != string::npos) {
            count++;
         }
      }
      return count;
   }
};

int main() {
   Solution s;
   string jewels = "aA";
   string stones = "aAAbbbb";
   cout << s.numJewelsInStones(jewels, stones) << endl;
   return 0;
}


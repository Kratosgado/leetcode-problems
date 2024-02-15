#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
   int numJewelsInStones(string jewels, string stones) {
      int initialSize = stones.size();
      for (char c : jewels) {
          stones.erase(remove(stones.begin(), stones.end(), c), stones.end());
       }
         return initialSize - stones.size();
    }
};

int main() {
      Solution s;
      string jewels = "aA";
      string stones = "aAAbbbb";
      cout << s.numJewelsInStones(jewels, stones) << endl;
      return 0;
}


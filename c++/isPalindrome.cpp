#include <iostream>

using namespace std;

class Solution {
public:
   
   bool isPalindrome(int x) {

      if (x < 0) {
         return false;
      }
      int original = x;
      int reversed = 0;
      while (x > 0) {
         reversed = static_cast<long long>(reversed) * 10 + x % 10;
         x /= 10;
      }
      return original == reversed;
   }
};

int main() {
   Solution s;
   cout << s.isPalindrome(121) << endl;
   cout << s.isPalindrome(-121) << endl;
   cout << s.isPalindrome(10) << endl;
   cout << s.isPalindrome(-101) << endl;
   cout << s.isPalindrome(1234664321) << endl;
   return 0;
}
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
   bool isValid(string s) {
      stack<char> brackets;
      for (char c : s) {
         if (c == '(' || c == '[' || c == '{') brackets.push(c);
         else if (c == ')' && !brackets.empty() && brackets.top() == '(')brackets.pop();
         else if (c == '}' && !brackets.empty() && brackets.top() == '{')     brackets.pop();
         else if (c == ']' && !brackets.empty() && brackets.top() == '[') brackets.pop();
         else return false;
      }
      return brackets.empty();
   }
};

int main() {
   Solution s;
   cout << s.isValid("()") << endl;
   cout << s.isValid("()[]{}") << endl;
   cout << s.isValid("(]") << endl;
   cout << s.isValid("([)]") << endl;
   cout << s.isValid("{[]}") << endl;
   return 0;
}
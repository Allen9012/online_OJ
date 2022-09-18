#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool isPalindrome(int i) {
  if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字。
        // 例如，当输入为 12321 时，在 while 循环的末尾我们可以得到 x = 12，revertedNumber = 123，
        // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除。
        return x == revertedNumber || x == revertedNumber / 10;
};

                #ifndef CompileOnline
// 这是为了编写用例的时候有语法提示. 实际线上编译的过程中这个操作是不生效的.
#include "header.cpp"
#endif

///////////////////////////////////////////////////////
// 此处约定:
// 1. 每个用例是一个函数
// 2. 每个用例从标准输出输出一行日志
// 3. 如果用例通过, 统一打印 [TestName] ok!
// 4. 如果用例不通过, 统一打印 [TestName] failed! 并且给出合适的提示.
///////////////////////////////////////////////////////

void Test1() {
  bool ret = Solution().isPalindrome(121);
  if (ret) {
    std::cout << "Test1 ok!" << std::endl;
  } else {
    std::cout << "Test1 failed! input: 121, output expected true, actual false" << std::endl;
  }
}

void Test2() {
  bool ret = Solution().isPalindrome(-10);
  if (!ret) {
    std::cout << "Test2 ok!" << std::endl;
  } else {
    std::cout << "Test2 failed! input: -10, output expected false, actual true" << std::endl;
  }
}

int main() {
  Test1();
  Test2();
  return 0;
}

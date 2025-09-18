#include <iostream>
#include <string> // 使用 std::string 需要這個
int main() {
  char grade = 'A';            // char：單一字元，用「單引號」
//   char initial = 'BC';      // ⚠️ 這是多字元常值：要嘛編譯錯、要嘛實作定義（不推薦）

  std::string initials = "BC"; // 多個字元請用 string，且用「雙引號」
  std::cout << "grade=" << grade << ", initials=" << initials << "\n";
  return 0;
}

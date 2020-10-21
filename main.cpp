#include <iostream>
#include <vector>

int main() {
  int n;
  std::cout << "Enter n: ";
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    if(i%3==0 && i%5==0) {
      std::cout << "FizzBuzz\n";
    }
    else if (i%3==0) {
      std::cout << "Fizz\n";
    }
    else if (i%5==0) {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << i << "\n";
    }
    
  }
  return 0;
}

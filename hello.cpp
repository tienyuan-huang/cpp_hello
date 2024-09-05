// `hello` source code

#include <iostream>

// add a foo function to print layer
void foo() {
  std::cout << "layerlayerlayerlayerlayerlayer" << std::endl;
  std::cout << "layerlayerlayerlayerlayerlayer" << std::endl;
  std::cout << "\n" << std::endl;
  std::cout << "foo" << std::endl;
  std::cout << "foofoofoofoofoofoofoofoofoofoo" << std::endl;
}

// make input int double
int bar(int x) {
  return x * 2;
}

int main() {
  std::cout << "Hello, World! I'm Evan, and this is q6.\n" << std::endl;
  foo();

  // print x
  int x = 50;
  std::cout << "x = " << x << std::endl;
  std::cout << "start double x......" << std::endl;
  x = bar(50);
  std::cout << "x = " << x << std::endl;

  return 0;
}
#include <cstdio>

int add_numbers(int a, int b) {
  return a + b;
}

int main() {
  int a = 1234;
  int b = 1566;
  printf("The sum of %d and %d is %d\n", a, b, add_numbers(a, b));
}

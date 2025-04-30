/*
 * A program that assigns several integer variables and prints them with the appropriate format specifier
*/

#include <cstdio>

int main() {
  unsigned short a = 0b10101010;
  printf("%hu\n", a);
  int b = 0123;
  printf("%d\n",b);
  unsigned long long d = 0xFFFFFFFFFFFF;
  printf("%llu\n", d);
}

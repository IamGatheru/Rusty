// A close cousin of pod that puts all the members in the same memory location, // You acn think of them as different views or interpretitions of a block of memory.
//Useful when marshalling structures that must be consistent across architectures, dealing with type checking issues related to C/C++ interoperation, and even packing bitfields.
// It takes as much memory as its largest member.

#include <cstdio>

union Variant {
  char string[10];
  int integer;
  double floating_point;
};

int main() {
  Variant v;
  v.integer = 42;
  printf("The ultimate answer: %d\n", v.integer);
  v.floating_point = 2.7182818284;
  printf("Euler's number e: %f\n", v.floating_point);
  printf("A dumpster fire:  %d\n", v.integer);
}

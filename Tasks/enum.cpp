//Create an enum class Operation that has values Add, Subtract, Multiply and Divide

#include <cstdio>

enum class Operation {
  Add,
  Subtract,
  Multiply,
  Divide,
};

int run_calculations(int a, int b, Operation op) {
  switch (op) {
  case Operation::Add: {
    return a + b;
  };
  case Operation::Subtract: {
    return a - b;
  };
  case Operation::Multiply: {
    return a * b;
  };
  case Operation::Divide: {
    if (b <= 0){
      printf("Not going to happen dawg\n");
    } else {
      return a /b;
    }
  }
  }
}
int main () {
  printf("a + b = %d", run_calculations(234, -456, Operation::Divide));
  return 0;
}

/**
 * Create an enum class Operation that has values Add, Subtract, Multiply, and Divide.
 * Create a struct Calculator. It should have a single constructor that takes an Operation.
 * Create a method on Calculator called int calculate(int a, int b).
 * Upon invocation, this method should perform addition, subtraction, multiplica-
 * tion, or division based on its constructor argument and return the result.
*/

#include <cstdio>

enum class Operation {
  Add,
  Subtract,
  Multiply,
  Divide
};

struct Calculator{

  Operation op;
  
  Calculator(Operation operation): op (operation){ }
  
  int calculate(int a, int b) {

    switch (op) {
    case Operation::Add: {
      return a + b;
    }break;
    case Operation::Subtract: {
      return a - b;
    }break;

    case Operation::Multiply: {
      return a * b;
    }break;

    case Operation::Divide: {
      if (b < 1) {
	printf("Not going to happen dawg");
      }
      return a / b;
    }break;
      
    }
    return 0;
  };
};
int main() {
  Calculator calc(Operation::Add);
  int sum;
  sum = calc.calculate(123, 325);
  printf("The sum is %d", sum);
  return 0;
}

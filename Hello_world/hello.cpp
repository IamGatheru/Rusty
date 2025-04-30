#include <cstdio>

int add_function(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello World!\n");
    int sum = add_function(34, 89);
    
    printf("The sum is %d\n",sum);
    return 0;
    
}

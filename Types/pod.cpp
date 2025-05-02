//POD - Plain old data classes
//Classes ar euser defined types that contain data and functions.

#include <cstdio>

struct Book{
  char name[256];
  int year;
  int pages;
  bool hardcover;
};

int main() {
  Book neuromancer;
  neuromancer.pages = 271;
  printf("Neuromancer has %dpages.", neuromancer.pages);
}

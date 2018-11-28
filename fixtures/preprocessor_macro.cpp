#include <iostream>

#define join(a,b) a ## b

int main() {
  join(std::c, out) << "test";
  int a = join(3, 4);
}

#include <cstring>
#include <iostream>

#include "./stack.h"

void Stack::pilha(const char *str) {
  int i = 0;
  int max = strlen(str);

  std::cout << "Elementos do Array:";

  while (i < max) {
    std::cout << str[i];
  }

  std::cout << '\n';
}

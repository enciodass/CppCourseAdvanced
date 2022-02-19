#include "./libary/stack.h"
#include <iostream>

int main(int argc, char **argv) {

  Stack st;

  char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
  char *parray = str;

  st.pilha(parray);

  return 0;
}

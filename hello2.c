#include <stdio.h>


int itt_is()  {
  puts("Meg itt is");
  return 0;
}

int main (int argc, char ** argv) {
  int ret;

  puts("Anyad itt jart");

  ret = itt_is();
  return ret;
}


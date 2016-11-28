#include <stdio.h>

int check_password(const char * password)
{
  return strcmp(password, "cisbugyi");
}

int main() {
  char input[21];

  puts("Enter password:");

  scanf("%20s", input);

  if (check_password(input) != 0) {
     puts("Bad password");
     return -1;
  }

 puts("Good job.");

  return 0;
}

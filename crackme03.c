#include <stdio.h>
#include <string.h>

int check_password(const char * password)
{
  size_t len = strlen(password);
  size_t sum = 0;


  while (len--)
    sum += password[len];

  if (sum != 'C' * 4) 
    return -1;

  return 0;
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

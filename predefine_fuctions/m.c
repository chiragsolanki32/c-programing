

#include <stdlib.h>
void main(){
int is_substr(char *str, char *sub)
{
  int num_matches = 0;
  int sub_size = 0;
  // If there are as many matches as there are characters in sub, then a substring exists.
  while (*sub != '\0') {
    sub_size++;
    sub++;
  }

  sub = sub - sub_size;  // Reset pointer to original place.
  while (*str != '\0') {
    while (*sub == *str && *sub != '\0') {
      num_matches++;
      sub++;
      str++;
    }
    if (num_matches == sub_size) {
      return 1;
    }
    num_matches = 0;  // Reset counter to 0 whenever a difference is found. 
    str++;
  }
  return 0;
}
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  size_t len = strlen(text);
  char* arrstrings[100];
  int count = 0;
  size_t i;
  int j;
  
  for (i = 0; i < len; i++) {
      for (j = 0; j < 26; j++) {
      	if (tolower(text[i]) == alphabet[j]) { 
          (i==(len-1)) ? sprintf(arrstrings[count++], "%d", j + 1) : sprintf(arrstrings[count++], "%d ", j + 1);   
        }
      }
  } 

  return arrstrings;
}

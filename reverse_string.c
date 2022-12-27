#include <stdio.h>


int main(){
  char string_in[200];
  int len_string=0;

  printf("string: ");
  scanf("%[^\n]%*c", string_in);

  while (string_in[len_string] != '\0'){
    len_string++;
  }

  for (int i=0; i<len_string/2; i++){
    string_in[i] ^= string_in[len_string - i - 1];
    string_in[len_string - i - 1] ^= string_in[i];
    string_in[i] ^= string_in[len_string - i - 1];
  }

  printf("string reverse: %s", string_in);

}
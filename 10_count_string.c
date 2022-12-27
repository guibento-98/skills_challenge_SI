#include <stdio.h>

int main(){
  char string_in[200];
  int len_string=0;

  printf("string: ");
  scanf("%[^\n]%*c", string_in);

  while (string_in[len_string] != '\0'){
    len_string++;
  }

  printf("len: %d", len_string);

}
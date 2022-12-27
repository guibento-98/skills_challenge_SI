#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ConcatRemove(char *s, char *t, int k){
  int s_len =(int)strlen(s), t_len = (int)strlen(t);

  if(s_len>100 || t_len>100 || k<1 || k>100){
    return 0;
  }

  if (abs(s_len - t_len) > k) return 0;
  else if (s_len == t_len) {
    int n_operation = 0;
    for (int i = 0; i < s_len; i++) {
      if (s[i] != t[i]) {
        n_operation++;
      }
    }
    return n_operation <= k;
  } else if (s_len < t_len) return t_len <= k;
  
  return (s_len + t_len - k) >= s_len;
}

int unit_Test(int result_expected, char *s, char *t, int k){
  printf("test with \ns = %s \nt = %s \nk = %d \n",s,t,k );
  if (ConcatRemove(s, t, k) == result_expected) {
    printf("passed\n");
  } else {
    printf("failed\n");
  }
  printf("\n");
}

int main() {
    
  unit_Test(1, "abc", "def", 6);
  unit_Test(0, "abcdef", "abcdef", 6);
  unit_Test(1, "hello world how are you", "hello world how are you", 20);
  unit_Test(1, "", "a", 1);
  
  return 0;
}
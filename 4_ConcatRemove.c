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

int main(){
  char s_in[110], t_in[110];
  int k_in;

  scanf("%[^\n]%*c", s_in);
  scanf("%[^\n]%*c", t_in);
  scanf("%d", &k_in);

  if (ConcatRemove(s_in, t_in, k_in)){
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}

#include <stdio.h>

int main(){
  for(int j=1; j<=100; j++){
    if(j%3==0 && j%5==0){
      printf("FooBaa \n");
    } else if (j%3==0) {
      printf("Foo \n");
    } else if (j%5==0) {
      printf("Baa \n");
    } else {
      printf("%d \n", j);
    }
  }
  return 0;
}
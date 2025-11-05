// build command for gcc:
// gcc -Wall -Werror -std=c99 -o repetitions repetitions.c -lm

#include <stdio.h>
#include <string.h>

int main() {
  char s[1000000];
  scanf("%s", s);
  int n = strlen(s);
  int max = 1;
  int temp_max = 1;
  for (int i = 0; i < n-1; i++) {
    char c = s[i];
    if(c==s[i+1]){
      temp_max++;
    }
    else{
      if(temp_max>max){
        max = temp_max;
      }
      temp_max = 1;
    }
  }
  if(temp_max > max){
    max = temp_max;
  }
  printf("%d",max);
  return 0;
}

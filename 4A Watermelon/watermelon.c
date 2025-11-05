//https://codeforces.com/problemset/problem/4/A

// build command for gcc:
// gcc -Wall -Werror -std=c99 -o watermelon watermelon.c -lm

#include <stdio.h>
int main(int argc, char** argv) {
  int num;
  (void)scanf("%d", &num); // to suppress compiler warning
  if(num%2==0 && num != 2){
    printf("YES");
    return 0;
  }
  printf("NO");
  return 0;
}
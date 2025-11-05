// build command for gcc:
// gcc -Wall -Werror -std=c99 -o weird_algorithm weird_algorithm.c -lm

#include <stdio.h>
int isEven(long long num){
  if(num%2==0){
    return 1;
  }
  return 0;
}
int main(int argc, char** argv) {
    long long num;
    (void)scanf("%lld", &num); // to suppress compiler warning
    printf("%lld", num);
    while(num>1){
      if(isEven(num)){
        num = num >> 1; // division by 2
        printf(" %lld",num);
      }
      else{
        num = (num + (num << 1))+1; // multiplies by 3 and then adds 1
        printf(" %lld",num);
      }
    }
    return 0;
}
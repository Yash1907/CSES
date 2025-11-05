// build command for gcc:
// gcc -Wall -Werror -std=c99 -o missing_number missing_number.c -lm

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  long long total = (long long)n * (n + 1) / 2;
  long long sum = 0;

  for (int i = 0; i < n - 1; i++) {
    int x;
    scanf("%d", &x);
    sum += x;
  }

  printf("%lld\n", total - sum);
  return 0;
}

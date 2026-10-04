#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
}

int main() {
int n, k;
scanf("%d %d", &n, &k);

int max_and = 0, max_or = 0, max_xor = 0;

for (int i = 1; i <= n; i++) {
for (int j = i + 1; j <= n; j++) {
int a = i & j;
int b = i | j;
int c = i ^ j;

if (a < k && a > max_and)
max_and = a;

if (b < k && b > max_or)
max_or = b;

if (c < k && c > max_xor)
max_xor = c;
}
}

printf("%d\n%d\n%d\n", max_and, max_or, max_xor);

return 0;
}

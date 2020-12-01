#include <stdio.h>

#define NH 1024
int val[NH] = {0};
int main() {
  while (1) {
    int i,j;
    scanf("%d\n", &i);
#define hash(i) ((i)%1022)
    if ((j=val[hash(i)]) && i+j == 2020) {
      return 0*printf("%d*%d=%d", i, j, i*j);
    } else if (val[j=hash(2020-i)]) {
      return printf("%d %d\n", i, val[j]);
    }
    val[j] = i;
  }
}

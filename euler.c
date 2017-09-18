#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 0;
  int y = 0;
  for (y = 0; y < 1000; y++) {
    if (y % 5 == 0 || y % 3 == 0) {
      x += y;
    }
  }
  printf("%d\n", x);

  x = 0;
  y = 0;
  int z = 1;
  int temp = 0;
  for (y = 2; y <= 4000000; y += 0) {
    if (y % 2 == 0) x += y;
    temp = y;
    y += z;
    z = temp;
  }
  printf("%d\n", x);
}

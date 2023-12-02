#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxand =0;
  int maxor =0;
  int maxxor =0;
  for (int i = 1; i<n; i++){
      for (int j = i+1; j<=n; j++){
          if (maxand<(i&j) && k>(i&j))
          maxand = i&j;
        if (maxor< (i|j) && k>(i|j))
          maxor = i|j;
          if (maxxor< (i^j) && k>(i^j))
          maxxor = i^j;
      }
  }
  printf("%d\n%d\n%d",maxand, maxor, maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

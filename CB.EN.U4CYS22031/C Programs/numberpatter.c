#include <stdio.h>
int main() {
  int n;
  
  scanf("%d", &n);
 
  for (int i = 0; i <= n; i++) {
    
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }	
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%d ", 9 - k);
    }
    printf("\n");
  }
  for (int i = n - 1; i > 0; i--) {
    // Print `2*(n-i)` spaces.
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%d ", 9-k);
    }
    printf("\n");
  }
 return 0;
}

#include <stdio.h>
int checkPrimeNumber(int n);
int main() {

  int n1, n2, i, nil;

  printf("Enter two  Numbers: ");
  scanf("%d %d", &n1, &n2);

 
  if (n1 > n2)
   {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }

  printf("Prime numbers between %d and %d are: ", n1, n2);
  for (i = n1 + 1; i < n2; ++i) {

   
    nil = checkPrimeNumber(i);

    if (nil == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}


int checkPrimeNumber(int n) {
  int j, nil = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      nil = 0;
      break;
    }
  }

  return nil;
}

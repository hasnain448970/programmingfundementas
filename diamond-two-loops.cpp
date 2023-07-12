#include <stdio.h>

int main() {
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            if(i + j == (n/2)+2 || i - j == n/2 || i + j == n/2 || j - i == n/2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

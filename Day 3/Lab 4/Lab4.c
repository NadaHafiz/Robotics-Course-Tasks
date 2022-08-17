#include <stdio.h>

void main() {
    int x;
    printf("Please enter the answer of 3 * 4 = ");
    scanf("%d",&x);
    while(x!=12)
    {
        printf("Incorrect , please try again : ");
        scanf("%d",&x);
    }
    printf("Correct , Thank you");
}
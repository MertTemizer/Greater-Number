// A program find to greater number.
#include <stdio.h>

int main()
{
    int A, B, C;
    
    printf("Enter the first number: ");
    scanf("%d", &A);
    
    printf("Enter the second number: ");
    scanf("%d", &B);
    
    if(A > B)
        C = A;
    
    if(B > A)
        C = B;
    
    printf("Greater number is: %d", C);
    
    return 0;
}

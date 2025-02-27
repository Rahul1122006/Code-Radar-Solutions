#include <stdio.h>
int main(){
    int i,j,sp,n;
    scanf("%d",n)
    for(i=1;i<=n;i++){
        for(sp=1;sp=n-i;sp++){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
}
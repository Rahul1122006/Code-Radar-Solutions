#include <stdio.h>
int main(){
    int i,j,n,sp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(sp=1;sp<=n-1;sp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(sp=1;sp<=n-1;sp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
}
}
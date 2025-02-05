#include<stdio.h>
int main() {
    int a,b,c=1;
    scanf("%d %d",&a,&b);
    for(int i = 0;i<=b;i++){
        c += i*2;
    }
    a -= c;
    printf("%d",a);
    
    
    printf("%d",a^(1<<b));
    return 0;
}
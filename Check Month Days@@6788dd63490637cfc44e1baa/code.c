#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int a;
    scanf("%d",&a);
@@ -19,7 +15,7 @@ int main() {
    if(a==10){printf("%d",31);}
    if(a==11){printf("%d",30);}
    if(a==12){printf("%d",31);}
    if(a<1 && a>12){
    if(a<1 || a>12){
        printf("Invalid month");
    }
    return 0;
    }
int main() {
    char a;
    scanf("%c",&a);
    int b = ("%d",a);
    if(a >= 'A' && a<='Z'){
        printf("Uppercase");
    }
    else if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
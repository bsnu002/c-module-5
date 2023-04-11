#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        int uppercase = ch - 32;
        printf("%c", uppercase);
    } 
    else {
        int lowercase = ch + 32;
        printf("%c", lowercase);
    }
    
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<0){
        n=-n;
    }
    int t=0;
    int d=n;
    while (d>0){
        t=t*10+d%10;
        d=d/10;
    }
    if (n==t){
        printf("Is a palindrome.");
    }
    else{
        printf("Is not a palindrome.");
    }
    return 0;
    }

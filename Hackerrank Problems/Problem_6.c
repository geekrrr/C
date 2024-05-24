// Given a five digit integer, print the sum of its digits.//

#include <stdio.h>

int main() {
	
    int n;
    int a,b,c,d,e;
    scanf("%d", &n);
    if(n/10000>=1){
        a = n/10000;
        n = n%10000;
    } 
    else{
        a = 0;
    }
    if(n/1000>=1){
        b = n/1000;
        n = n%1000;
    }
    else{
        b = 0;
    }
    if(n/100>=1){
        c = n/100;
        n = n%100;
    }
    else{
        c = 0;
    }
    if(n/10>=1){
        d = n/10;
        n = n%10;
    }
    else{
        d = 0;
    }
    if(n/1>=1){
        e = n/1;
    }
    else{
        e = 0;
    }
    printf("%d",a+b+c+d+e);
    return 0;
}
// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.//

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c){
        if(a>d){
            return a;
        }
        else{
            return d;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",max_of_four(a, b, c, d));
    return 0;
}
/* Given a positive integer denoting , do the following:
If (integer <= 9), print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If (integer > 9), print Greater than 9.*/

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a<=9){
        switch(a){
            case 1:
            printf("one");
            break;
            case 2:
            printf("two");
            break;
            case 3:
            printf("three");
            break;
            case 4:
            printf("four");
            break;
            case 5:
            printf("five");
            break;
            case 6:
            printf("six");
            break;
            case 7:
            printf("seven");
            break;
            case 8:
            printf("eight");
            break;
            case 9:
            printf("nine");
            break;
        }
        
    }
    else{
        printf("Greater than 9");
    }
    return 0;
}
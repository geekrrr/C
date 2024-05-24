// Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.//

#include <stdio.h>

void update(int *a,int *b) {
    printf("%d\n",(*a+*b));
    if(*a>*b){
        printf("%d",(*a-*b));
    }   
    else{
        printf("%d",(*b-*a));
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

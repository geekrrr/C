// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum and difference//

#include <stdio.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    printf("%d ",a+b);
    printf("%d\n",a-b);
    
    printf("%.1f ",c+d);
    printf("%.1f",c-d);
    
    return 0;
}
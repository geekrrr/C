#include<stdio.h>

int main(){
  char re;
    int input;
    float a,b,d;
    int x,y,z;
  for(int i=0; re!='n'; ){
  //input//
  printf("What do you want to do:\n\nAddition - Enter 1\nSubtraction - Enter 2\nMultiplication - Enter 3\nDivision - Enter 4\nModulus - Enter 5\n ");
 scanf("%d",&input);

//calculation//
if(input == 1){
  if(re != 'y'){
    printf("Enter the first number:");
    scanf("%f",&a);
}
   printf("Enter the second number:");
   scanf("%f",&b);
    d = a+b;
}

if(input == 2){
 if(re != 'y'){
   printf("Enter the first number:");
   scanf("%f",&a);
}
   printf("Enter the second number:");
   scanf("%f",&b);
    d = a-b;
}


if(input == 3){
  if(re != 'y'){
   printf("Enter the first number:");
   scanf("%f",&a);
}
   printf("Enter the second number:");
   scanf("%f",&b);
    d = a*b;
}


if(input == 4){
  if(re != 'y'){
     printf("Enter the first number:");
     scanf("%f",&a);
}
    printf("Enter the second number:");
    scanf("%f",&b);
  if(b==0){
    printf("not defined");
}
else{
d = a/b;
}
}

if(input == 5){
  if(re != 'y'){
    printf("Enter the first number:");
    scanf("%d",&x);
}
    printf("Enter the second number:");
    scanf("%d",&y);
     z = x % y;
}

//output//
if(input !=5){
  printf("Your answer is -  %f\n",d);
}
if(input == 5){
  printf("Your answer is -  %d\n",z);
}
  printf("Do you want to do any furthur calculation with this result\nEnter y for yes and n for no : \n");
  scanf(" %c",&re);
if(re == 'y'){
  if(input != 5){
  a = d;
  }
  if(input == 5){
  a = z;
  }
}
else if(re == 'n'){
  printf("Thank you Have a nice day!!");
}
else{
  printf("invalid input\n");
  printf("Enter y for yes and n for no : ");
}
  }
return 0;
}
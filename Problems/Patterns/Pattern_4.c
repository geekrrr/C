#include<stdio.h>

int main(){
int depth;
printf("Enter the depth of pyramid : ");
scanf(" %d",&depth);
  for(int z=depth;z>0;z--){
    for(int j=depth;j>z;j--){
      printf("  ");
    }
    for(int i=0;i<z;i++){
      printf("* ");
    }
  printf("\n");
  }
  return 0;
}
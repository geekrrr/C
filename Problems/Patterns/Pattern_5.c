#include<stdio.h>

int main(){
int height;
printf("Enter the height of pyramid : ");
scanf(" %d",&height);

for(int z=0;z<height;z++){
  for(int i=height;i>z;i--){
    printf("  ");
  }
  for(int j=0;j<2*z+1;j++){
    printf("^ ");
  }
  printf("\n");
}
for(int z=height-1;z>0;z--){
  for(int j=height;j>=z;j--){
   printf("  ");
  }  
  for(int i=0;i<(2*z)-1;i++){
   printf("^ ");
  }
  printf("\n");
}

  return 0;
}
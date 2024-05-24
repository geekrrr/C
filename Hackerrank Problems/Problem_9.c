/* Take input of marks of students in array 
marks at even indexes contain marks of boys and at odd indexes , the marks of girls
Give output of sum of boys or girls according to input taken from the user
*/
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int n, char gender) {
  int boys = 0;
  int girls = 0;
  for(int i=0;i<n;i++){
     if(i==0 || i%2==0){
         boys = boys + marks[i];
     }
     else{
         girls = girls + marks[i];
     }
  }
  if(gender == 'b'){
      return boys;
  }
  else{
      return girls;
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
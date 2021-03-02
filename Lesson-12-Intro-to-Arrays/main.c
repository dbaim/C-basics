#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
   
  //Lesson 12
  //Exercise 1
  /*
  int n[10];
  int i, j;
for (i=0;i<10;i++) {
  if (i==0) {
    n[i] = 1;
  } else {
n[i] = n[i-1] * i;
  }
}
for (j=0;j<10;j++) {
  printf("n[%i] = %i \n", j, n[j]);
}
*/
//Exercise 2
int n[20];
int k, j;
int rand();
srand((unsigned) n[20]);
for (k=0;k<20;k++) {
  n[k] = rand() % 50;
  printf("n[%i] = %i \n", k, n[k]);
}
//Exercise 3
int min;
 for (j = 0; j < 20; j++) {
    min = n[0];
        if (n[j] < min && min <=10 ) {
           min = n[j];
        }
      }
printf ("Minimum value: %i \n", min);


int max;
for (j = 0; j < 20; j++) {
  max = n[0];
  if (n[j]>max) {
    max=n[j];
    }
  }
printf("Maximum value: %i \n", max);
  

  int ave;
  for (j = 0; j < 20; j++) {
    ave += n[j];
  }
  printf("Average value: %i \n", ave/20); 
    return 0;
}

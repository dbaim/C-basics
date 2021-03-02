#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  int month;
  int day;
  int year;
} date;

 bool isLeapYear (date d) { 
bool leapYearFlag; 
if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 ) { 
leapYearFlag = true; 
} else {
  leapYearFlag = false;
 } 
return leapYearFlag; 

}

int number0fDays (date d) {
int days; 
bool isLeapYear (date d); 
const int daysPerMonth[12] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
if ( isLeapYear (d) && d.month == 2 ) {
days = 29; 
} else {
  days = daysPerMonth[d.month - 1]; 

} return days; 
}

date dateUpdate (date *today) {
  date tomorrow;
  int numberOfDays (date d);
  if ( today->day != number0fDays(*today)) { tomorrow.day = today->day + 1; 
  tomorrow.month = today-> month;
  tomorrow.year = today->year; 
} else if ( today-> month == 12 ) {
   tomorrow.day = 1; 
   tomorrow.month = 1; 
   tomorrow.year = today->year + 1; 
} else { 
  tomorrow.day = 1; 
  tomorrow.month = today->month + 1; 
  tomorrow.year = today-> year; 
 
  } return tomorrow;
}




/*
  //Exercise 7
void sort(int *a, int n, int d) {
              int i, j, temp;
              if (d==0) {
              for (i = 0; i<n-1; i++) {
                for (j = i+1; j<n;j++) {
                  if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                  }
                }
              }
            }
            if(d==1) {
              for (i = 0; i<n-1; i++) {
                for (j = i+1; j<n;j++) {
                  if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
        }
      }        
    }
  }
}

void sort3(int a[], int size) {
  int j, n, temp;
    for (int i = 0; i < size; i++) {
      for (i = 0; i<n-1; i++) {
                for (j = i+1; j<n;j++) {
                  if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
            }
        }
    } 
}
*/



void sort3(int *a, int size) {
  // int i, j, temp;
  // for (i = 0; i < size; i ++) {
  //   for (j = i + 1; j < size; j ++) {
  //     if (a[i] > a[j]) {
  //       temp = a[i];
  //       a[i] = a[j];
  //       a[j] = temp;
  //     }
  //   }
  // }
  int i = 0, j;
  int temp;
  for (;i<size;i++) {
    for (j = i + 1; j < size; j ++) {
    if (*(a+j) < *(a+i)) {
      temp = *(a + i);
      *(a + i) = *(a + j);
      *(a + j) = temp;
    }
  }
  printf("%d \n", *(a + i));
 }
}


void readLine (char *buffer) {
  char character;
  int i = 0;
  do {
    character = getchar();
    *buffer = character;
    buffer++;
  } while (character != '\n');
  *buffer = '\0';
}

int main(void) {

  setvbuf(stdout, NULL, _IONBF, 0);
  /*

  //Exercise 7
  
int a[5] = {4, 2, 3, 9, 10};
int *a1[5];
int i, d;
for (i = 0; i<5; i++) {
    a1[i] = a;
    printf("%5d", a[i]);
} printf("\n");
printf("Type in 0 - ascending, and 1 - descending bruh: ");
scanf("%i", &d);
sort(*a1, 5, d);
for (i = 0; i<5; i++) {
    printf("%5d", a[i]);
} printf("\n");

int a2[3] = {6, 89, 2};
int size = 3;
sort3(a2, size); 

int size = 3;
int a[3] = {6, 91, 2};
sort3(a, size); 

char line[81];
for (int i = 0; i < 3; i ++) {
  readLine(line);
  printf("%s \n", line);
} 
date dateUpdate (date *today); 
date thisDay, nextDay; 
printf ("Enter today's date (mm dd yyyy): "); 
scanf ("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year); 
nextDay = dateUpdate (&thisDay); 
printf ("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month, nextDay.day, nextDay.year % 100); */

// char *message = "Programming is fun \n";
// char message2[] = "You said this";
// char *format = "x = %i \n";
// int x = 100;
// printf("%s", message);
// printf("%s", "Programming is fun \n");
// printf("%s", message);
// printf(message);

  return 0;
}
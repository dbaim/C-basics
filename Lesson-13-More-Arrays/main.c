#include <stdio.h>

int main(void) {
  /*
  //Exercise 1 (?) Can't be that easy
  int n[12][12];
  int i,j, val, k;
  for (i = 0; i < 12; i++) {
 for (j = 0; j < 12; j++) {
 n[i][j] = val;
 val= i*j;
 }
}
 
for (i = 0; i < 12; i++) {
 for (j = 0; j < 12; j++) {
 printf("%3i", n[i][j]);
 }
}
 printf("\n");
 */
 //Exercise 2
 /*
int R = 3, C = 4;
int a[R][C];
 
int i, j, val = 100;
 printf("Matrix 'a': \n");
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 a[i][j] = val;
 val++;
 }
}
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", a[i][j]);
 }
 printf("\n");
}

int b[C][R];
int k, v, val1 = (val- (C*R) + 25);
printf("Matrix 'b': \n");
for (k = 0; k < C; k++) {
 for (v = 0; v < R; v++) {
  b[k][v]=val1;
  val1++;
 }
}
for (k = 0; k < C; k++) {
 for (v = 0; v < R; v++) {
   printf("%4i", b[k][v]);
 }
}
*/
//Exeercise 3
/*
int R=5, C=6;
int a[R][C];
 
int i, j, val = 100;
 
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 a[i][j] = val;
 val++;
 }
}
 
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", a[i][j]);
 }
 printf("\n");
}
int max, loc, loc1;
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
max = a[0][0];
if (a[i][j]>max) {
  max = a[i][j];
  loc = i+1;
  loc1 = j+1;
}
   }
      }
printf("Max value: %i \n", max);
printf("It's location is: %i(row), %i(column) \n", loc, loc1);
*/
//Exercise 4
// Matrix 1
printf("Matrix 1: \n");
int R = 3, C = 3;
int a[R][C];
 
int i, j, val = 0;
 
/* set matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 a[i][j] = val;
 val++;
 }
}
 
/* print matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", a[i][j]);
 }
 printf("\n");
}
printf("\n");
//Matrix 2
printf ("Matrix 2: \n");
int b[R][C];
 
int val1 = 1;
 
/* set matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 b[i][j] = val1;
 val1++;
 }
}
 
/* print matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", b[i][j]);
 }
 printf("\n");
}
//Multiplication matrix
printf("Multiplication result: \n");
int c[R][C];

int sum, k;

/* set matrix elements */
 for (i = 0; i < R; i++) {
      for (j = 0; j < C; j++) {
        sum = 0;
         for (k = 0; k < 3; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

/* print matrix elements */
for (i = 0; i < R; i++) {
	for (j = 0; j < C; j++) {
		printf("%5d", c[i][j]);
	}
	printf("\n");
}
  return 0;
}
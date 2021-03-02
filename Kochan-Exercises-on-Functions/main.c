#include <stdio.h>
//Question on Exercises 5: How to logically proper modify this sqrt function?
/*
int mat1[4][5] = {{11, 22, 33, 1, 2}, {33, 44, 55, 3, 4}, {55,66, 77, 5, 6}, {88,99,11,7,8}};
int mat2[5][4] = {{77, 88, 99, 9}, {99, 111, 121, 10}, {121, 144, 169, 11}, {170, 171, 172, 12}, {173, 174, 175, 13}};

     
    //Exercise 2
    int triangularNum(int n) {
      int triangularNum= 0;
      for (int i = 1; i<=n; i++) {
        triangularNum += i;
    } printf("Triangular Number: %i", triangularNum); 
      return triangularNum;
    }
    //Exercise 7
    int a_to_the_x(int a, int x) {
      for (int i = 1; i<x; i++) {
        a = a*a;
      }
      printf("%i", a);
      return a;
    } 
    //Exercise 8
int own_sqrt(int d) {
    int temp, sqrt;
    sqrt = d / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = (d/temp + temp) / 2;
    } 
    return sqrt;
    }

    int quadr_eq(int a, int b, int c) {
      int d, x1, x2;
      d = b*b/(4*a*c);
      if (d<0) {
        printf("Roots r imaginary");
        return 0;
      }
      if (d==1) {
        x1 = -b/2*a;
        x1 = x2;
        printf("Roots are: %i", x1);
        return 0;
      }
      x1 = (-b + own_sqrt(d)) / 2*a;
      x2 = (-b - own_sqrt(d)) / 2*a;
      printf("Roots: %i, %i", x1, x2);
      return 1;
           } 

      //Exercise 9
      int gcd(int num1, int num2) {
        int gcd;
        for(int i=1; i <= num1 && i <= num2; ++i) {
        if(num1%i==0 && num2%i==0) {
            gcd = i;
        }
    } return gcd;
      } 
      
      int lcm(int num1, int num2) {
        int lcm;
        lcm = num1 * num2 / gcd(num1, num2);
        printf("%i", lcm);
        return lcm;
      } 
      //Exerecise 11
      int arraySum(int size, int arr[size]) {
        for (int i = 0; i<size; i++) {
          arr[i] = arr[i] + arr[i-1];
        } printf("Sum of array: %i \n", arr[size - 1]);
        return 1;
      } 
      //Exercise 12(a, b)
     //a 
      int transposeMatrix (int mat1[4][5], int mat2[5][4]) {
          for (int i = 0; i<4; i++) {
            for (int j = 0; j<5; j++) {
              mat1[i][j] = mat2[j][i];
              printf("%5i", mat1[i][j]);
            } printf("\n");
          }
          return 1;
       }
       //b
       int transposeMatrix1(int mat1[4][5], int mat2[4][5], int row, int column) {
          for (int i = 0; i<row; i++) {
            for (int j = 0; j<column; j++) {
              mat1[i][j] = mat2[j][i];
              printf("%5i", mat1[i][j]);
            } printf("\n");
          }
          return 1;
       } 
        //Exercise 13
            void sort(int a[], int n, int d) {
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
    }*/
int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
  /*
void scalarMultiply (int nRows, int nCols, int matrix[nRows] [nCols], int scalar, int base); 
void displayMatrix (int nRows, int nCols, int matrix[nRows] [nCols]); 
int base;
int sampleMatrix[3][5] = 
{ { 7, 16, 55, 13, 12 }, { 12, 10, 52, 0, 7 }, { -2, 1, 2, 4, 9 }}; 
printf ("Original matrix:\n"); 
displayMatrix (3, 5, sampleMatrix);


printf ("\nMultiplied by 2:\n");  
scalarMultiply (1, 5, sampleMatrix, 2, base); 
displayMatrix (3, 5, sampleMatrix);

int a[5] = {4, 2, 3, 9, 10};
int i, d;
for (i = 0; i<5; i++) {
    printf("%5d", a[i]);
} printf("\n");
printf("Type in 0 if u want to sort arr in ascending, and 1 if descending bruh: ");
scanf("%i", &d);
sort(a, 5, d);
for (i = 0; i<5; i++) {
    printf("%5d", a[i]);
} printf("\n");

  
  sqrt1(4.0, 0.00001);
      
  triangularNum(10);

  int a, x;
  printf("Vozvodimoe chislo: ");
  scanf("%i", &a);
  printf("Stepen': ");
  scanf("%i", &x);
  a_to_the_x(a, x); 
  

  int a, b, c;
  printf("Type in a: ");
  scanf("%i", &a);
  printf("Type in b: ");
  scanf("%i", &b);
  printf("Type in c: ");
  scanf("%i", &c);
  quadr_eq(a, b, c);


lcm(15, 10); 


int arr[] = {1, 2, 3, 4, 5};
arraySum(5, arr); 


for (int i = 0; i < 4; i++) {
 for (int j = 0; j < 5; j++) {
 printf("%5d", mat1[i][j]);
 }
 printf("\n");
}
printf("\n");
   for (int i = 0; i < 5; i++) {
 for (int j = 0; j < 4; j++) {
 printf("%5d", mat2[i][j]);
 }
 printf("\n");
}     
printf("\n");
printf("After transpose: \n");
transposeMatrix(mat1, mat2); */
  return 0;
}
/*
void scalarMultiply (int nRows, int nCols, int matrix[nRows] [nCols], int scalar, int base) {
int row, column; 
do {
  printf("Type in the value of base: ");
scanf("%i", &base);
if (base == matrix[0][0]) {
  break;
}
} while (1);
for ( row = 0; row < nRows; ++row ) {
  for ( column = 0; column < nCols; ++column ) {
  matrix[row][column] *= scalar; 
  } 
}
}
void displayMatrix (int nRows, int nCols, int matrix[nRows] [nCols]) { 
int row, column; 
for ( row = 0; row < nRows; ++row) {
  for ( column = 0; column < nCols; ++column ) {
   printf ("%5i", matrix[row] [column]); 
  } printf("\n");
}
} */

 

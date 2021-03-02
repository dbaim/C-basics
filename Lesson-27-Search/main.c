#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMat(int size, int (*mat)[size]) {
    for (int i = 0; i < size; i ++) {
      for (int j = 0; j < size; j ++) {
      printf("%3d", *(*(mat + i) + j));
      }
      printf("\n");
    }
}

void addMat (int size, int (*mat)[size], int (*mat1)[size]) {
  int (*res)[size];
  for (int i = 0; i < size; i ++) {
    for (int j = 0; j < size; j ++) {
        *(*(res + i) + j) = *(*(mat + i) + j) + *(*(mat1 + i) + j);
        printf("%3d", *(*(res + i) + j));
    }
    printf("\n");
  }
}

#include <stdio.h>
#include <stdlib.h>

double func(double x) {
	return -2 * x * x * x - x + 2;
}

double zeroFinder(double min, double max, double error) {
    if (func(min) * func(max) >= 0) { 
        return 0; 
    } 
    double guess; 
    while ((max-min) >= error) { 
        guess = (max + min)/2; 
        if (func(guess) == 0.0) {
            break; 
        } else if (func(guess)*func(min) < 0) {
            max = guess; 
        } else {
            min = guess;
        } 
    } 
    return guess;
} 

int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
	// Testing code
	// printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.01));
	// printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.001));
	// printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.000001));
	// printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.0000000001));

int mat[3][3];
int mat1[3][3];
int val = 1;
int val1 = 9;
for (int i = 0; i < 3; i ++) {
  for (int j = 0; j < 3; j ++) {
  mat[i][j] = val;
  val++;
  printf("%3d", mat[i][j]);  
  }
  printf("\n");
}

for (int i1 = 0; i1 < 3; i1 ++) {
  for (int j1 = 0; j1 < 3; j1 ++) {
  mat1[i1][j1] = val1;
  val1++;
  printf("%3d", mat1[i1][j1]);  
  }
  printf("\n");
}
addMat(3, mat, mat1);
    return 0;
}
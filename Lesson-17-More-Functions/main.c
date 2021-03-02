#include <stdio.h>

double minOfArr(int size, int arr[size]) {
  int x, min;
  for (x=0; x<size; x++)  {
        min = arr[0];
        if (min > arr[x]) {
          min = arr[x];
        }
    }
    printf("Minimal element of array: %i \n", min);
    return min;   
} 

double maxVal(int len, int arr[len][len]) {
   int i, j, max;
   for (i = 0; i<len; i++) {
     for (j = 0; j<len; j++) {
max = arr[0][0];
if (arr[i][j]>max) {
  max = arr[i][j];
        }
     }
   } printf("Max element of multidim array: %i \n", max); 
   return max;
} 
void arrReverse(int size, int a[]) {
  int i, j, temp;
    for (i = 0; i<size-1; i++) {
                for (j = i+1; j<size;j++) {
                  if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
          } 
    } 

}
void printArr(int size, int arr[])
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
} 
 


  int transposeMatrix1(int mat1[][2], int mat2[][2], int row, int column) {
          for (int i = 0; i<row; i++) {
            for (int j = 0; j<column; j++) {
              mat1[i][j] = mat2[j][i];
              printf("%5i", mat1[i][j]);
            } printf("\n");
          }
          return 1;
       } //Question: what is wrong with my function here? Did I understand right the meaning behind "Transpose"?


  void printRes(int size, int arr[][2])
{
  int i, j;
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
        printf("%5d", arr[i][j]);
    }
    printf("\n");
  }
} 

int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
  //Exercise 1
  int arr2[] = {1, 2, 3, 4, 5};
 minOfArr(5, arr2);
  //Exercise 2
  int arr1[2][2] = {{11, 22}, {33, 44}};
  maxVal(2, arr1);
  //Exercise 3
  int arr[] = {1, 2, 3, 4, 5, 6};
    printArr(6, arr);
    arrReverse(6, arr);
    printf("Reversed array is \n");
    printArr(6, arr);    
  //Exercise 4 
   int orig[2][2]= {{11, 22}, {33, 44}};
   int result[2][2];
  
   printRes(2, orig);
   printRes(2, result);
   transposeMatrix1(orig, result, 1, 1);
   printRes(2, orig);
   printRes(2, result);
  return 0;
}
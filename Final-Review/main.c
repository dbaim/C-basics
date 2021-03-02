#include <stdio.h>
#include <stdlib.h>

#define W 555
#define X 0
#ifndef X
#define X 333
#define Y 222
#else
#define Y 111
#endif

typedef struct {
  _Bool drop;

  int id;
  int qGrade [4];
  int finalExam;

  double grade;

 } StudentResults;

double pow1(int x,int n)
{
    int i; 
    double number = 1.0;

    for (i = 0; i < n; ++i) {
        number *= x;
    }
    return number;
}

int ownSqrt (int x) {
    int sqrt = x / 2;
    int temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = (x/temp + temp) / 2;
    } return sqrt;
}

  //Exercise 10 Func
double followingSum (double x, int n) {
  if (n == 0) {
    x = 1;
    return 1;
  } else {
    return followingSum(x, n - 1) + pow1(x, n);
  }
}

// void first ( double arr[]) {
// arr[1] = 99.9;
// }
// void second ( int x, int *y) {
// x = 2 * x;
// *y = x + *y;
// }

// typedef struct _tree_node {
// int value;
// struct _tree_node *left;
// struct _tree_node *right;
// } tree_node;
// tree_node* create(int i) {
// if (i == 0) return NULL;
// tree_node* nd = (tree_node*)malloc(sizeof(tree_node));
// nd->value = i;
// nd->left = create(i-1);
// nd->right = create(i-1);
// return nd;
// }
// void output(tree_node* nd) {
// if (nd == NULL) return;
// output(nd->left);
// printf("%i", nd->value);
// output(nd->right);
// }

double calcGrade (StudentResults *student, double weightOfTheFinal) {
    int quizAve, sum = 0, min;
    for (int i = 0; i < 4; i++) {
      sum += student->qGrade[i];
      min = student->qGrade[0];
      if (min > student->qGrade[i]) {
        min = student->qGrade[i];
      }
    }
    quizAve = sum / 4;
    if (weightOfTheFinal > 0.0 && weightOfTheFinal < 1.0) {
      if (student->drop == 1) {
         quizAve = (sum - min) / 4;
         student->grade = quizAve + (weightOfTheFinal * student->finalExam);
      } else if (student->drop == 0) {
        quizAve = quizAve * (1 - weightOfTheFinal);
        student->grade = quizAve + (weightOfTheFinal * student->finalExam);
      }
    } else {
      return -1;
    } return student->grade;
}

  //Final Practice
void divisors (int x) {
  int arr[50];
  int i = 0;
  for (int y = 1; y < x; y++) {
    if (x % y == 0) {
      arr[i] = y;
      printf("%d \n", arr[i]);
      i++;
      }
    }
  }

  int isPrime(int a) {
   int c;
   for (c = 2; c <= a - 1; c++) { 
      if (a%c == 0) {
        return 0;
      }
   }
   return 1;
}  

  void multiples (int x, int u) {
    int arr[50];
  int i = 0;
  int y = x;
  for (int i = 0; i < u; i++) {
    if (x % x == 0) {
      arr[i] = x;
      printf("%d \n", arr[i]);
      x += y;
      } 
    }
  }

int lcm (int x, int y) {
  int max = 1;
  while (1) {
    if (max % x == 0 && max % y == 0) {
      return max;
      break;
    } else {
      max++;
    }
  }
}

 int hcd (int x, int y) {
   int max = x + y;
   while (1) {
     if (x % max == 0 && y % max == 0) {
       return max;
       break;
     } else {
       max--;
     }
   }
}

void primeFact (int n) {
    while (n % 2 == 0) { 
        printf("%d ", 2); 
        n = n/2; 
    } 
    for (int i = 3; i <= ownSqrt(n); i = i + 2) {  
        while (n%i == 0) { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
    if (n > 2) {
        printf ("%d ", n); 
    }
}

void move2DArrayToArrayPointers(int m, int n, char twoDArr[m][n], char* arrOfPtr[]) { 
  int arrSize = (m * n) + 1;
  int k = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        for (k = 0; k < arrSize; k++) {
          arrOfPtr[k] = &twoDArr[i][j];
          printf("%c \n", *arrOfPtr[k]);
          break;
        }
      }
    }
  }

  void arrSwap(int length, int arr1[length], int arr2[length], int first) {
    int *temp, *temp1, temp2;
    for (int i = first - 1; i < length; i++) {
      temp = &arr1[i];
      temp1 = &arr2[i];

      temp2 = *temp1;
      *temp1 = *temp;
      *temp = temp2;
    }
     printf("Array 1: \n");
  for (int i = 0; i < length; i++) {
    printf("%d \n", arr1[i]);
  }

  printf("Array 2: \n");
  for (int i = 0; i < length; i++) {
    printf("%d \n", arr2[i]);
  }
  }

  void selectionSort(int x[], int size) {
     int i, j, temp;
     for (i = 0; i < size - 1; i++) {
          for (j = i + 1; j < size; j++) {
               if (x[j] < x[i]) {
                 temp = x[i];
                 x[i] = x[j];
                 x[j] = temp;
      }
    }
  }
}

void swap (char *a, char *b) {
  char *temp;
  temp = a;
  a = b;
  b = temp;
  printf("a: %c \n", *a);
  printf("b: %c \n", *b);

}


int main(void) {

  // //Exercise 2
  // for (int i = 1; i <= 5 ;i++) {
  //   for (int j = 1; j <= 5; j++) {
  //     printf("%5f \t", pow1(j, i));
  //   }
  //   printf("\n");
  // }

  //Exercise 6
  // int min, max;

  // int size = 7;
  // int x[] = {1, 2, 3, 4, 5, 88, 99};

  // for (int i = 0; i < size; i ++) {
  //   if (i % 2 == 0) {
  //       min = x[0];
  //     if (min > x[i]) {
  //       min = x[i];
  //     }
  //   } else {
  //     max = x[0];
  //     if (max < x[i]) {
  //       max = x[i];
  //     }
  //   }
  // }

  // printf("%d %d \n", min, max);

  //Exercise 7 Check
// int a = 10, b = 20;
// int *x, *y, *z;
// int **pp;
// int arr[3] = { 5, 13, 29 };
// x = &b;
// pp = &y;
// y = arr + 1;
// *y = a;
// z = y;
// **pp = 999;
// y++;
// printf("%d \n", *y);

  // Exercise 10
// printf("%f \n", followingSum(3, 3));

  //Fall 2018 Exam 3

// double ar[] = {11.1, 22.2, 33.3};
// first(ar);
// printf ( "first: %f \n" , ar[1]);
// int n = 20, m = 3;
// second(n, &m);
// printf ( "second: %i %i \n" , n, m);

// #if X
// printf( "%d %d %d" , W, X, Y);
// #else
// printf ( "%d %d %d" , Y, W, X);
// #endif

// char ch1 = 'A' , ch2 = 'B' , ch3 = 'C' ;

// char *ptr1 = &ch1;
// char *ptr2 = &ch2;
// char *ptr3 = &ch3;
// char **ptr4 = &ptr1;

// ptr1 = ptr2;
// *ptr1 = 'Z' ;
// **ptr4 = 'X';
// *ptr3 = *ptr2;

// printf("%c %c %c \n", *ptr1, *ptr2, *ptr3);
// printf("%d %d %d %d \n", ptr1, ptr2, ptr3, ptr4);
// printf("%c %c %c \n", ch1, ch2, ch3);
// printf("%d %d %d %d\n", &ptr1, &ptr2, &ptr3, &ptr4);

// char a = 'a', b = 'b';
// char *pa = &a;
// char *pb = &b;
// pa = pb;
// printf("%c %c %d %d", *pb, *pa, pb, pa);

// tree_node* root = create(4);
// output(root);

  //Spring 2020 Optional 3 Exam (Question 1)

// double grade;
// double weightOfTheFinal = 0.3; //Assuming final wieghts 30%
// //Assuming quizzes weight 40% (10% each) 
// // + We assume that student already has 30% full for homeworks (Overall we calculating 70% of grade)
// StudentResults someGay = {0, 1234, {5, 6, 8, 9}, 8, grade};
// printf("Student's grade : %f \n", calcGrade(&someGay, weightOfTheFinal));

  // int arr[50];
  // int x;
  // scanf("%d", &x);
  // divisors(x);
  // multiples(x, 5);
  
  // printf("%d", lcm (10, 5));
  // printf("%d", hcd (10, 6));
  
  // primeFact(225);

  // int m = 2, n = 3;
  // char twoDArr[m][n];
  // char *arrOfPtr[50];

  // char val = 'a';

  // for (int i = 0; i < m; i++) {
  //   for (int j = 0; j < n; j++) {
  //     twoDArr[i][j] = val;
  //     val++;
  //   }
  // }


  // for (int i = 0; i < m; i++) {
  //   for (int j = 0; j < n; j++) {
  //     printf(" %c", twoDArr[i][j]);
  //   }
  //   printf("\n");
  // }

  // move2DArrayToArrayPointers (m, n, twoDArr, arrOfPtr);

  // int arr1[] = {1, 2, 3, 4, 5, 6};
  // int arr2[] = {9, 9, 9, 9, 9, 9};
  // int len = sizeof(arr1) / sizeof(arr1[0]);

  // printf("Array 1: \n");
  // for (int i = 0; i < len; i++) {
  //   printf("%d \n", arr1[i]);
  // }

  // printf("Array 2: \n");
  // for (int i = 0; i < len; i++) {
  //   printf("%d \n", arr2[i]);
  // }
  
  // int first = arr1[3];

  // arrSwap(len, arr1, arr2, first);

  // int a = 10, b = 25, c;
  // c = a++ + b++;
  // printf("%d", c);

  // int arr1[] = {1, 8, 3, 0, 15, 6};

  // selectionSort(arr1, 6);
  // for (int i = 0; i < 6; i++) {
  //   printf("%d \n", arr1[i]);
  // }

  // char a = 'b', b = 'e';
  // char *a1 = &a, *b1 = &b;
  // swap (a1, b1);

  int a = 1, b = 1, i;
  do {
    for (i = 1; i <= a; i++) {
      a = a + i;
      b = b * i;
      a = a/b;
    }
   } while (a > 1); 
  printf("%d %d", a, b);

  return 0;
}
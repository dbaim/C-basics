#include <stdio.h>

int i = 0;

  //Exercise 1
int printNat(int n) {
  if (n == 51) {
    return 1;
  } else {
    printf("%5d", n);
    return printNat(n+1);
  }
}

  //Exercise 2
int sum(int n) {
  if (n == 0) {
    return 0;
  } else {
    return sum(n - 1) + n;
  }
}

  //Exercise 8
int arrayMax(int n, int arr[n]) {
  int x = arr[0];
  if (x > arr[n]) {
    return x;
  } else {
    return arrayMax(n, &arr[n - 1]);
  }
}

  //Exercise 12
int isPrime(int num, int i) {
    if (i == 1) {
        return 1;
    } else {
       if (num % i == 0) {
         return 0;
       } else {
         return isPrime(num, i - 1);
       }       
    }
}

  //Problem C
 int binarySearch (int n, int arr[], int key) {
   if (i == n) {
     return 0;
   } else if (key == arr[i]) {
     return i;
   } else {
     i++;
     return binarySearch(n, arr, key);
   }
 }

  // Problem D
int sumOfDigits(int n) {
  int sum = 0, remainder;
  if (n == 0) {
    return 0;
  } else {
      remainder = n % 10;
      sum = sum + remainder;
      n /= 10;
      return sumOfDigits(n);
   } 
 } 

  //Problem 18
int hailSeq (int n) {
  if (n == 1) {
    return 1;
  } 
  if (n % 2 == 0) {
       n /= 2;
       printf(" %d", n);
     } else {
       n = (n * 3) + 1;
       printf(" %d", n);
     }
     return hailSeq(n);
  }

  //Problem 20
char findCap(char str[]) {
  if (str[i] == '\0') {
    return 0;
  } else if (str[i] > 65 && str[i] < 90) {
    return str[i];
  } else {
    i++;
    return findCap(str);
  }
}

  //Problem N
int cheater (int n, int arr[], int k) {
  if ((arr[i + 1] - arr[i]) > k + 2) {
    printf("Cheater");
    return 0;
  } else if ((arr[i + 1] - arr[i]) <= k + 2) {
    printf("Not a Cheater");
    return 1;
  } else {
    i++;
    return cheater(n, &arr[i + 1], k);
  } 
}

int main(void) {

  //int x = printNat(0);

  // int x = sum(5);
  // printf("%d", x);

  // int n = 5;
  // int arr[] = {5, 10, 15, 20, 25}; 
  // printf("%d \n", arrayMax(n, arr));

  // int x = 6;
  // printf("%d", isPrime(x, x/2));

  // int n = 5;
  // int arr[] = {1,2,3,4,5};
  // printf("%d", binarySearch(n, arr, 7));
  
  // printf("%d \n", sumOfDigits(45651));

  // int x = 13;
  // printf(" %d", x);
  // printf("%d", hailSeq(x));

  // char str[] = "testStr";
  // printf("Fisrt Capital letter: %c \n", findCap(str));

  // int n = 6;
  // int k = 5;
  // int arr[] = {1, 7, 16, 29, 35, 45};
  // cheater(n, arr, k);

  return 0;
}
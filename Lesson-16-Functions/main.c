#include <stdio.h>
_Bool isIdeal(int j) {
int i3, sum1 = 0, count = 0, i[count], count1;
 for (i3 = 1; i3<=j; i3++) {
     if (j%i3 == 0) {
         i[count++] = i3;
       } 
     }
     for (count1 = 0; count1<count;count1++) {
       sum1 = sum1 + i[count1];
     sum1 = sum1 - j;
if (sum1!=0) {
  _Bool isIdeal = 0;
  printf("This number is not ideal");
  break;
} else {
  printf("This number is ideal");
  break;
} 
 } return j;
}

 int sumOfDigits(int l) {

     int l1, sum1 = 0, remainder;
     l1 = l;
      while (l1 != 0) {
      remainder = l1 % 10;
      sum1 = sum1 + remainder;
      l1 /= 10;
   } 
   printf("Sum of digits of %i is %i \n", l, sum1);
   return l;
 } 


 _Bool isPrime(int k) {
   int m = 0;
   m = k/2;
   if (k==1 || k==3) {
    printf("This number is prime \n");
    return 1;
  }
   for (int i2 = 2; i2<m; i2++) {
     if(k%i2==0) {  
       _Bool isPrime = 0;  
printf("Number is not prime \n");  
    break;
  } else {
    _Bool isPrime = 1;
    printf("This number is prime \n");
    break;
  }
   }
  return k;
}

double sinApprox(double x, int n) {
  double diff;
  int sign = 1;
  for (int i1 = n-1; i1>0 && i1%2!=0; i1--) {
    diff = x + sign * (x*diff)/i1;
    sign *= -1;
  }
  return diff;
}

double expApprox(double x, int n) {
  double sum;
  for (int i = n-1; i > 0; i--) {
    sum = 1 + (x*sum)/i;
  }
    return sum;
} 

int main(void) {
setvbuf(stdout, NULL, _IONBF, 0);
  //Exercise 1
int n = 10;
double x = 1.0f;
printf("ExpApprox = %f \n",expApprox(x, n)); 
  //Exercise 2 (?)
  //Exercise 3
   isPrime(18); 
  //Exercise 4
   sumOfDigits(129);
  //Exercise 5 
   isIdeal(11);
  return 0;
  }

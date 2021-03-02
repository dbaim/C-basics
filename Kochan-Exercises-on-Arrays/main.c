#include <stdio.h>

int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
  /*
  //Exercise 2
  int values[10];
  for (int i = 0; i<10; i++) {
    values[i] = 0;
    printf("%i \n", values[i]);
  } 
  //Exersice 3
 int size = 100000, ratingCounters[size], i, response; 

for ( i = 1; i <= size; ++i ) {
    ratingCounters[i] = 0; 

printf ("Enter your responses\n"); 


    for ( i = 1; i <= size; ++i ) { 
        scanf ("%i", &response); 

    if ( response == 999 ) {
      printf ("\n\nRating Number of Responses\n"); 
printf ("-- ------------\n"); 
      printf ("%4i%14i\n", i, ratingCounters[i]); 
        break; 
    } else {
        ++ratingCounters[response]; 
        }
    }
}
    //Exercise 4
    float arr[10] = {1.00, 2.00, 3.00, 4.00, 5.50, 6.05, 7.70, 8.80, 9.90, 12.1};
    float res, avg;
    
    for (int i = 0; i<10; i++) {
          res += arr[i];  
          avg = res/10;
        } 
        printf("Average: %f \n", avg);

    //Exercise 5
    int numbers [10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}; \
    int i, j; 
for ( j = 0; j < 10; ++j ) {
for ( i = 0; i < j; ++i ) {
numbers[j] += numbers[i]; 
}
}
for ( j = 0; j < 10; ++j ) {
printf ("%i ", numbers[j]); 
printf ("\n");
}

    //Exercise 6
    int var1 = 0, var2 = 1, var3;
    for (int i = 0; i < 10; i++) {
    
    var3 = var1 + var2;
    var1 = var2;
    var2 = var3;
      printf("%i \n", var3);
    } */
    //Exercise 7
    int number = 150,i,j;
    

    int primes[number];

    //populating array with naturals numbers
    for(i = 2; i<=number; i++) {
        primes[i] = i;
    }
    i = 2;
    while ((i*i) <= number)
    {
        
            for(j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        i++;
    }
    
    for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            printf("%d\n",primes[i]);
    } 
    
    

return 0; 
} 
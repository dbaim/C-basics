#include <stdio.h>

int main(void) {

  //Exercise 1
  int k;
     char text;
     printf("\nPlease, enter your text: \n");
     while(text!='\n') {
       text=getchar();
       if(text=='a') {
       k++;
     }
    }
    printf("'a' Occurances: %i", k);
    //Exercise 2
    char text1;
     printf("\nPlease, enter your text: \n");
     while (text1!='\n') {
       text1=getchar();
     if (text1>=97 && text1<=122) {
       text1-=32;
       printf("%c", text1);
       } else {
         printf("%c", text1);
       }
     }
     //Exercise 3 (?)
     int chars=0;
     char text2;
     printf("\nPlease, enter your text: \n");
     
     
     while (text2!='\n') {
        text2 = getchar();
        chars++;
        if (text2==' ' || text2=='\n') {
          chars-=chars;
     }
     printf("%i \n", chars);
     }
     
  return 0;
}
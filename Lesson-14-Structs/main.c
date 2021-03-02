#include <stdio.h>
//Struct for in-video Assignment
 /*typedef struct {
    int CustomerID;
    _Bool isSavings;
    int balance;
    double interestRate;
  } Account ;
  */
  //Struct for Ex.2
  typedef struct {
    int ID;
    char gen[50];
    int gr1, gr2, gr3;
    double fgr;
  } student;
int main(void) {
  //Assignment 
  /*
    int isS1, time, A;

  Account UserAcc;

    printf("Enter your User ID: \n");
    scanf("%i", &UserAcc.CustomerID);
      printf("Is your bank account is for savings? Print 1 for 'Yes', and 0 for 'No': \n");
      scanf("%i", &isS1);
      UserAcc.isSavings = isS1;
        printf("Enter your initial balance: \n");
        scanf("%i", &UserAcc.balance);
          printf("For how long are you ready to wait (in years): \n");
          scanf("%i", &time);

  if (isS1 == 1) {
      UserAcc.interestRate = 0.02;
      A = UserAcc.balance * (1 + UserAcc.interestRate * time);
  }

  if (isS1 == 0) {
      UserAcc.interestRate = 0.01;
      A = UserAcc.balance * (1 + UserAcc.interestRate * time);
  }

  printf("Your final amount will be: %i \n", A);
*/
  //Exercise 2
  student userStud;
    printf("Please, enter your ID: \n");
    scanf("%i", &userStud.ID);
      printf("What's your gender: \n");
      scanf("%s", userStud.gen);
      do {
        printf("Enter your last CSCI 151 grades (in the range from 0.0 to 100.0): \n");
        printf("1st grade: ");
        scanf("%i", &userStud.gr1);
        printf("2nd grade: ");
        scanf("%i", &userStud.gr2);
        printf("3rd grade: ");
        scanf("%i", &userStud.gr3);
        if (userStud.gr1>=0 && userStud. gr1<=100) {
         if (userStud.gr2>=0 && userStud. gr2<=100) {
          if (userStud.gr2>=0 && userStud. gr2<=100) {
          break;
        }
      }
    }
      } while (1);
       userStud.fgr = (userStud.gr1 + userStud.gr2 + userStud.gr3) / 3;
        printf("ID: %i \n", userStud.ID);
        printf("Gender: %s \n", userStud.gen);
        printf("Final grade: %f", userStud.fgr);

  
  return 0;
}
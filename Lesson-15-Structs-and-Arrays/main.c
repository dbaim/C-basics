#include <stdio.h>
//Exercise 3 struct
typedef struct {
  int r,g,b;
} Color;
typedef struct {
  int x, y;
} Coords;
typedef struct {
  Coords point[5];
  Color color;
} Pentagon;
/*
typedef struct {
  int ID;
  char type;
  int bal;
} BankCustomer;
*/
int main(void) {
  //Exercise 3
  /*
int i;

BankCustomer cust[10];
FILE *file;
  file = fopen("file.txt", "r"); 
    for (i=0; i<10; i++) {
      fscanf(file, "%i %c %i", &cust[i].ID, &cust[i].type, &cust[i].bal);
      printf("Customer's ID, type and balance: %i %c %i\n", cust[i].ID, cust[i].type, cust[i].bal);
  }
  int ave1, ave2, ave3;
  ave1 = (cust[0].bal + cust[3].bal + cust[8].bal)/3;
    ave2 = (cust[1].bal + cust[2].bal + cust[5].bal + cust[7].bal)/4;
      ave3 = (cust[4].bal + cust[6].bal)/2;
  printf("The average balance for all checking accounts: %i \n", ave1);
    printf("The average balance for all savings accounts: %i \n", ave2);
      printf("The average balance for all deposit accounts: %i \n", ave3);
  printf("/n");
  */
  //Exercise 2
  FILE *file1;
  file1 = fopen("text1.txt", "r");
  int i;
  Color red = {255, 0, 0};
  Pentagon shape[5];
  shape[5].color = red;
  for (i=0; i<5; i++) {
     fscanf(file1, "%i %i", &shape[i].point[i].x, &shape[i].point[i].y);
  }
  printf("Pentagon shape coords: %i %i", shape[i].point[i].x, shape[i].point[i].y );

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int lim = 11;

typedef struct {
  int rain;
  double temp;
  double wind;
} weather;

/*
void strcpy1(char *fromStr, char *toStr) {
    while (*fromStr >= '\0') {
        *toStr = *fromStr;
        fromStr++;
        toStr++;
    }  
}

char* stringCopy(char *fromStr) {

int n = 50;
char *toStr = (char*)malloc(n*sizeof(char));
strcpy1(fromStr, toStr);
  return toStr;
}
*/

int totalRain (weather *ast) {
  int total;
  for (int i = 0; i < lim; i++) {
    total += ast->rain;
  } return total;
}

double lowestTemp(weather *ast) {
  double low;
  for (int i = 0; i < lim; i ++) {
    low = ast->temp;
    if (low < ast->temp) {
      low = ast->temp;
    }
   ast->temp++;
  } return low;
}

double averageWind (weather *ast) {
  double ave;
  for (int i = 0; i < lim; i++) {
    ave += ast->wind;
  } return ave/lim;
}


int main() {
 /* 
    //Exercise 1

char word[] = "bruh";
printf("%s", stringCopy(word));
*/
    //Exercise 2
FILE *file;
file = fopen("astana.txt", "r");

char c;
int lim = 0;

while (c!=EOF) {
	   c = getc(file);
	   if (c=='\n') {
	     lim++;
	   }
	 }

weather ast, *astptr;
astptr = &ast;

astptr->rain = (int)malloc(lim*sizeof(int));
astptr->temp = (int)malloc(lim*sizeof(int));
astptr->wind = (int)malloc(lim*sizeof(int)); // (?)

   fclose(file);
	 file = fopen("astana.txt", "r");

printf("  Rain(cm) \t Temp(*c) \tWind(m/s) \n");
for (int i = 0; i < lim; i++) {
    fscanf(file , "%i %lf %lf", &astptr->rain, &astptr->temp, &astptr->wind);
    printf("\t %i \t%lf \t%lf \n", astptr->rain, astptr->temp, astptr->wind);
}

int total = totalRain(astptr);
printf("Total annual rain: %i \n", total);

double low = lowestTemp(astptr);
printf("Lowest temperature: %lf \n", low);

double ave = averageWind(astptr);
printf("Average wind: %lf \n", ave);


    return 0;
}
  
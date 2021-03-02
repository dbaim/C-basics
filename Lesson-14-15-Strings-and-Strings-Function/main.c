#include <stdio.h>
#include <math.h>

/*
void stringCopy(char fromStr[], char toStr[]) {
    for (int i = 0; i < toStr ['\0']; i++) {
      fromStr[i] = toStr[i];
    }
} */
/*
_Bool areEqual(char str1[], char str2[]) {
  int i = 0;
  int x = 0;
  while (str1[i] == str2[i] && x == 0) {
    if (str1[i] == '\0' || str2[i] == '\0') {
      x = 1;
    } 
    i++;
  } return x;
} */
/*
void reverse(char str1[], char str2[]) {
  int i, k, j;
      for (i = 0; str1[i] != '\0'; i++) {
         k = i-1;
    }
    for (j = 0; j <= i-1; j++)  {
        str2[j] = str1[k];
        k--;
    }
} */

// void concat(char str1[], char str2[]) {
//   int i, j;
//     for (i = 0; str1[i] != '\0'; i++);
//       for (int j = 0; str2[j] != '\0';j++, i++) {
//       str1[i] = str2[j];
//   }
//   str1[i] = '\0';
//     }

  //Exercise 2 (Lesson 21)
 double strToDouble(char num[]) {
	int i, result1 = 0;
  double decResult = 0, p=0, ten = 10, intValue = 0;
  double result;
  int degree;

  _Bool minusFlag = 0;
  _Bool eFlag = 0;
  _Bool dotFlag = 0;


	for (i = 0; num[i] != '\0'; i++) {

    if (num[i] == '-') {
      minusFlag = 1;
      continue;
    }
    if (num[i] == 'e') {
      eFlag = 1;
      continue;
    }
    
    if (num[i] == '.') {
      dotFlag = 1;
      while (num[i+1] != '\0') {
        if (eFlag == 1) {
      i++;
      break;
    }
   intValue = num[i+1] - '0';
   decResult = decResult + intValue / ten;
   ten = ten * 10;
   i++;
  }
 }

    intValue = num[i] - '0';
		result = (result * 10 + intValue);
	}

  
  if (minusFlag == 1) {
    result = -result;
  } 

  if (eFlag == 1) {
    result = result * 1000;
  }

  if(dotFlag == 1) {
    p = p * 10 + intValue;
    result = result * pow(10, p);
    if (minusFlag == 1) {
      p = p * 10 + intValue;
      result = result * pow(10, -p);
    }
  }

	return result;
}

  //Kochan Exercises
  //Exercise 4
  char* subString (char word[], int start, int count, char result[]) {
    int i = 0;
    int len = 0;
    for (int j = 0; word[j] != '\0'; j++) {
      len++;
    }
    char some[50];
    for (;i < count; i++) {
      result[i] = word[i+start];
      if (count > len) {
        return word;
      }
    } 
    return result;
  }

    //Exercise 5
  int findString (char str1[], char str2[]) {
    int i = 0, j = 0;
    int ind;
    for (; str1[i] != '\0'; i++) {
      if (str1[i] == str2[i]) {
        ind = i - 1;
      } 
    } if (ind == 0) {
      return -1;
    } else {
    return ind;
    }
  }

    //Exercise 6
  char* removeString (char text[], int start, int chars) {
    int i = 0;
    int len = 0;
    char result[50];
    for (int j = 0; text[j] != '\0'; j++) {
      len++;
    }
    char some[50];
    for (;i < len; i++) {
      result[i] = text[i+start];
      text[i] -= result[i];
    } 
    return text;
  }
    
    //Exercise 7 - ??
  char* insertStr (char str1[], char str2[], int num) {
      int i = 0;
      int len = 0;
      for (int j = 0; str1[j] != '\0'; j++) {
      len++;
    }
      for (; str1[i] != '\0'; i++) {
        str1[num + i] += str2[i];
      } return str1;
  }

  


int main(void) {

  setvbuf(stdout, NULL, _IONBF, 0);
  
// char fromStr[100] = "Hello";
// char toStr[100] = "World";
// char resStr[200];
// concat(fromStr, toStr);
// printf("%s", fromStr);
  //LESSON 20
/*
char fromStr[100] = "Hello";
char toStr[100] = "World";
char resStr[200];
*/
  //Exercise 1
/*
stringCopy(fromStr, toStr);
printf("%s %s", fromStr, toStr); */
  //Exercise 2
/*
int x = areEqual(fromStr, toStr);
printf("%i", x); */
  //Exercise 3
  /*
reverse(fromStr, toStr);
printf("%s", toStr); */
  //Exercise 4
  /*
concat(fromStr, toStr);
printf("%s", fromStr);
*/
  //LESSON #21
  //Exercise 1
  /*
FILE *file;
file = fopen("data.txt", "r");

if(file == NULL) {
	    printf("Problem opening file");
	  }
	printf("File opened successfully! \n");

	char c;
	int lim = 0, lim1;

	 while (c!=EOF) {
	   c = getc(file);
	   if (c=='\n') {
	     lim++;
	   }
	 }

char name[lim], score[lim], score1[lim];
int realScore[lim];
int realScore1[lim];
int sum[lim];

	 fclose(file);
	 file = fopen("data.txt", "r");

	   //This line helps us to get rid of the header of the file
	  fscanf(file, "%*[^\n]");

	  for (lim1 = 0; lim1<lim; lim1++) {
      fscanf(file, "%s %s %s", &name[lim1], &score[lim1], &score1[lim1]);
      realScore[lim1] = atoi(&score[lim1]);
      realScore1[lim1] = atoi(&score1[lim1]);
      sum[lim1] = realScore[lim1] + realScore1[lim1];
      printf("%5i \n", sum[lim1]);
    } */

    //Exercise 2
// char str[] = "125.5";
// double x = strToDouble(str);
// printf("%f", x + 1);

  //Exercise 4
// char word[] = "character";
// char result[50];
// printf("%s", subString(word, 4, 3, result));

  //Exercise 5
// char str1[] = "a chatterbox";
// char str2[] = "hat";
// printf("%d", findString(str1, str2));

  //Exercise 6
// char text[] = "the wrong son";
// printf("%s", removeString(text, 4, 6));

  //Exercise 7
char text[] = "the wrong son";
printf("%s", insertStr(text, "per", 10));


  return 0;
}
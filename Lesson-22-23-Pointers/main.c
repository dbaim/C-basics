#include <stdio.h>

#define MAX 11
/*
int own_strcmp (char *word) {
  int num = 0;
  while (*word != '\0') {
      word++;
      num++;
  } return num;
}

void stringCopy(char *fromStr, char *toStr) {
    while (*fromStr >= '\0') {
        *toStr = *fromStr;
        fromStr++;
        toStr++;
    }  
}

_Bool areEqual(char *str1, char *str2) {
    int r = 0;
    int i = 0;
    while (*str1 == *str2 && r == 0) {
      if (*str1 == '\0' && *str2 == '\0') {
        r = 1;
      }
      str1++;
      str2++;
    } return r;
} 

void reverse(char *fromStr, char *toStr) {
  char *begin;
  char *end;
  char ch;
  begin = fromStr;
  end = fromStr;
  int length = own_strcmp(fromStr), c;
  for (c = 0; c < length - 1; c++) {
    end++;
  }
  for (c = 0; c < length / 2; c++) {
      ch = *end;
      *end = *begin;
      *begin = ch;
      begin++;
      end--;
      }
      stringCopy(fromStr, toStr);
    }


void concatenate(char *str1, char *str2, char *resultStr) {

  char *start;
  start = str1;

  int x = areEqual(str1, str2);
  if (x == 1) {
    printf("Error \n");
    return;
  }
  while(*str1 != '\0') {
        str1++;
    } 
     while(*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
  }
  *str1 = '\0';
  stringCopy(start, resultStr);
}
*/
int main(void) {
/*
	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	char result[50];

	// Test code for stringCopy
	stringCopy(word1, result);
	printf("Test 1.1 result: %s\n", result);
	stringCopy(word2, result);
	printf("Test 1.2 result: %s\n", result);
	stringCopy(word3, result);
	printf("Test 1.3 result: %s\n", result);

	// Test code for areEqual
	printf("Test 2.1 result: %i\n", areEqual(word1, word2));
	printf("Test 2.2 result: %i\n", areEqual(word1, word3));
	printf("Test 2.3 result: %i\n", areEqual(word2, word4));
	printf("Test 2.4 result: %i\n", areEqual(word4, word2));


	// Test code for reverse
	reverse(word1, result);
	printf("Test 3.1 result: %s\n", result);
	reverse(word2, result);
	printf("Test 3.2 result: %s\n", result);
	reverse(word3, result);
	printf("Test 3.3 result: %s\n", result);
  

	// Test code for concatenate
	concatenate(word1, word2, result);
	printf("Test 4.1 result: %s\n", result);
	concatenate(word3, word4, result);
	printf("Test 4.2 result: %s\n", result);
	concatenate(word1, word1, result);
	printf("Test 4.3 result: %s\n", result);

*/

int array[5][MAX];
int k = 2;
for (int i = 0; i < 5; i++) {
  for (int j = 0; j < MAX; j++) {
    array[i][j] = k*j;
    printf(" %d", array[i][j]);
  }
  k++;
  printf("\n");
}
































	return 0;
}
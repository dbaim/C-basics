#include <stdio.h>

int main(void) {
  //LESSON 11
  //Exercise 2, 3 (1)
  FILE *file = fopen("datafile.txt", "r+");
  FILE *file1 = fopen("output.txt", "r+");
  FILE *temp;
  printf("Enter the filename to open for story \n"); 
  char filename [100];
    scanf("%s", filename); 
    temp = fopen(filename, "a+");
  char c, d;

  if(file == NULL || file1==NULL){
    printf("Problem opening file");
    return 1;
  }

  char word [50];

  while((c = getc(file1)) != EOF)
  {
    if(c == '$')
    {
      fscanf(file, "%s", word);
      fprintf(temp, "%s", word);
    } else fprintf(temp, "%c",c);
  }
  fclose(file);

 
  printf("Done.");
  fclose(temp);
  fclose(file1); 
  return 0;
}
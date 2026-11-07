#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;

  //Write mode
  fp=fopen("data.txt","w");

  if(fp==NULL)
  {
    printf("Error");
    return 1;
   }
  fprintf(fp,"\n1.C program is easy to understand\n2.It runs on different Operating system\n3.It is Portable.\n4.Memory management.\5.Structured Program");

  fclose(fp);
  fp = NULL;

  //Append mode
  fp=fopen("data.txt","a");

  if(fp==NULL)
 {
   printf("Error");
   return 1;
  }
  fprintf(fp,"\n1.Mr.Saravanan is a very friendly Teacher.\n2.He is very Kind.\n3.He teaches in understandable way.");

  fclose(fp);
  fp = NULL;

  //Read mode
  fp = fopen("data.txt","r");

  if(fp == NULL)
  {
   printf("Error");
   return 1;
  }
  while((ch = fgetc(fp))!=EOF)
  {
   printf("%c",ch);
  }

  fclose(fp);
  fp=NULL;

 return 0;
}
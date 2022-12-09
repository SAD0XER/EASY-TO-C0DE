#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf

//Compiler version gcc  6.3.0
/*this program for practice purpose only*/

int main()
{
  char give_me[43];
  char s1[20]= "sarvesh is a BEST";
  char str1[]= { 's', 'a', 'r', 'v', 'e', 's', 'h', '.', '\0' };
  /*some compiler support '\n' , but some not. */
  p(" My first string is %s\n", str1);
  p("Enter something..\n");
  fgets(give_me,100,stdin);

  fputs(give_me,stdout);
  
  char ss[4],sss[50];
  p("Enter something..\n");
  
  fgets(ss,4,stdin);//fputs(ss,stdout);
  p("%s",strlen(ss));// ek string reserve asto NULL character '\0' sathi.
  
  return 0;
}
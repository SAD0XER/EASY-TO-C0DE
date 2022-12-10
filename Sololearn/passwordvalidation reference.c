// JΞΜΔ  🇨🇩👑


#include<stdio.h>
#include<string.h>

int main(){
    
 int i, n=0, m=0;
 char s[30];
 scanf("%s",s);
 if(strlen(s) >= 7){
     
   for(i=0; s[i]!='\0'; i++){
      if(s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='&'||s[i]=='*'||s[i]=='!'||s[i]=='@')
          ++n;

      if(s[i]>=48 && s[i]<=57) // ascii
          ++m;
   }
 }

 if(n>=2 && m>=2)
   printf("Strong");
  else
    printf("Weak");
    
 return 0;
}// more simplified
/*
#include<stdio.h>
int main() int i,reverselN;
printf("Enter an interger:");
scanf("%fl",&p);
originalN=n;
while(j!=0)
{
remainder=n%10;
reversedN=reversedN*10+remainder;
n/=10:
}
if(originalN==reversedN)
printf("%c is a palindrom ",originalN);
else
printf("%l is not a palindrom.", originalN);
return 0:
}
*/
//=====================================//

#include <stdio.h>

int main()
{
  int i,reverselN;
  
  printf("Enter an interger:");
  scanf("%d",&i);
  int originalN = i;
  
  
  while(i != 0)
{
  
float remainder = i % 10;
int reverselN = reverselN * 10 + remainder;
i /= 10;
}

if (originalN == reverselN)
printf("%d is a palindrom ",originalN);
else
printf("%d is not a palindrom.",originalN);

return 0;
} 
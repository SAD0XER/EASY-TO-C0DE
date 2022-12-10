#include <stdio.h>
int main() {
int noy;
scanf("%d",&noy);

if(noy<1)
{
printf("shh");
}

else if(noy>=1||noy<10)
{
for(int i=0;i<=noy;i++)
{
printf ("Ra!");
}
}

else if(noy>10)
printf("High Five");
   
   return 0;
}
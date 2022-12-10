#include <stdio.h>
#define p printf
int main() {
int noy;//number of yards
scanf("%d",&noy);

if(noy==0)
{
p("shh");
}

else if(noy>10){p("high five");}

else if(!(noy==0)||(noy>1||noy<10))
{
for(int i=1;i<=noy;i++)
{
p("Ra!");
}
}
   return 0;
}
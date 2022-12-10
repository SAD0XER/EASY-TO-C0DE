/*#include <stdio.h>
int main() {
int noy;
scanf("%d",&noy);

if(noy<1){printf("shh");}

if(noy>=1||noy<=10){
for(int i=0;i<=noy;i++){printf("Ra!");}}
else if(noy>10){printf("High Five");}

return 0;
}
*/


#include <stdio.h>
#define p printf
int main (){
    //p("hi guys!...\n\n\n\a\a\a\a");
    int yard;
    scanf("%d",&yard);
    if(yard<=0){printf("Shh");}//if your program becomes fail,then you can try yard==0.

    if(yard==1 || (yard>0&&yard<=9)){
for(int i=1;i<=yard;i++){printf("Ra! %d...%d",i,yard);}
                                    }
if(yard>=10){printf 
("High five");}
}//end of the program.
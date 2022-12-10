#include <stdio.h>
#include <string.h>

char convertor (char *a[252])
{
    unsigned  x[10] = {'1','2','3','4','5','6','7','8','9','0'};
    for(int q=0;q<sizeof(a);q++)
    {
    if (a[q]==x[10])
    {
        switch(x){
        case 1:{}
        case 2:{}
        case 3:{}
        case 4:{}
        case 5:{}
        case 6:{}
        case 7:{}
        case 8:{}
        case 9:{}
        case 0:{}
        } // end of switch.
    
    
    
    
    } //end of "if" condition.
    }//end of "for" loop.
} //end of function.


int main()
{
    char s[256];
    fgets(s,256,stdin);
    convertor(s);
    //fputs(s,stdout);
    
    
    
    return 0;
}
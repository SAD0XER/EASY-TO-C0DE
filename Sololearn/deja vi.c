// edit on: 30/10/2022-Real File Name: deja vi
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],a[1];
    
    fgets(str,100,stdin);
    
    int size = strlen(str);
    
    
    a[size] = str[size];
    
    for (int i=0; i<size; i++)
    {
        
        for (int j=0; j<size-i; j++)
        {
            if(a[i] == (str[i+1]))
            {
                printf ("deja vu");
                } // end of "if"
        
        } //end of loop 2.
    
    } //end loop 1.
    
    return 0;
}
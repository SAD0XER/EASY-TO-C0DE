
#include <iostream>
using namespace std;
#include <string>

class sarv /*name of class is "sarv" */
{
    public :/* abstraction used. */
    
    string getter(string x)
    {
        om = x;
        return om;
    }
    
    void putter()
    {
        cout<<om;
    }
    
    private :/* this is private..shhhh! */
    string om;
    
};

int main()
{
    sarv s;// i creat a object.
    s.getter("SAD_is_a_great_coder.");
    /* passing string into class function. */
    
    s.putter();
    /* call another class function named "putter". */    
    
    return 0;
}
#include <iostream>
using namespace std;



class Birthday {
    
    
    public:
    
        Birthday(int m, int d, int y)
        : month(m), day(d), year(y)
        {
        /* iam a empty Constructor .*/ 
        }
        /* THIS IS A TOTALLY empty Constructor of ""Birthday"" class. that's doing nothing. */
        
        void printDate()
        {
            cout<<month<<"/"<<day <<"/"<<year<<endl;
        }/*
        this is a function of printing date (Birthday_date). 
        */
        
    private:
        int month;
        int day;
        int year;/*these are the private member of class Birthday.
        */
};// end of the class.



class Person {
    
    
    public:
    
        Person(string n, Birthday b): name(n), bd(b) /*Now, our Person class has a member of type Birthday.
        
        -->"Birthday b;":
        "Birthday" means its like a any datatype and 'b' is like a name of that variable.
        */
        { 
        /* iam a empty Constructor .*/
        }
        /* THIS 0ne also A TOTALLY empty Constructor of ""Perdon"" class. that's also do nothing.*/
/*`%%%%%%%%%%%%%%%`*/
        /*
        this function is special
        */
        void printInfo()
        {
            cout << name << endl;
            bd.printDate();
        }/*
        Notice that we can call the bd member's printDate() function, since it's of type Birthday, which has that function defined.
        */
        
    private:
        string name;
        Birthday bd;
        
}; // End of the class.

/*
Now that we've defined our Birthday and Person classes, we can go to our main, create a Birthday object, and then pass it to a Person object.
*/

//>>>>>>>>>>>>>>>>>>>
int main()
{
    Birthday bd(06, 05, 2002);
    /*
    here, they passing the values on the object of class "Birthday".
    */
    
    Person p("SARVESH", bd);
    /* and here, they pass the string (name of the person) and also pass the object name of class "Birthday".
    */
    
    p.printInfo();
    /*
    EXPLAINATION:
    We've created a Birthday object for the date of 2/21/1985. Next, we created a Person object and passed the Birthday object to its constructor. Finally, we used the Person object's printInfo() function to print its data.
    */
    
    /*
    <<TRY THIS ONE ALSO>>
    Their's no point of creating an object Birthday and then copying to another object..
    it's better like this
     

int main()
{
    Person p("David", Birthday(2,21,1985));
    p.printInfo();
}
    */
    
    
    return (0);
}
/*
In general, composition serves to keep each individual class relatively simple, straightforward, and focused on performing one task. It also enables each sub-object to be self-contained, allowing for reusability (we can use the Birthday class within various other classes).

*/
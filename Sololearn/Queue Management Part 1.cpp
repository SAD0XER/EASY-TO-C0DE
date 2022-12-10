/*
This code is not my efforts.
i copletely give up on this code because i don't understand the code.
i just simply search it on google and i found the answer  OR paste it on code and complete the pratice project.

PLEASE IF ANY ONE IS INTERESTED.. THEN PLEASE explain me this code in COMMENT section.
it will really helpful for me.

*/


#include <iostream>
using namespace std; 

class Queue { 
    int size; 
    int* queue; 
    
    public:
    Queue() {
        size = 0;
        queue = new int[100];
    }
    void remove() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } 
        else { 
            for (int i = 0; i < size - 1; i++) { 
                queue[i] = queue[i + 1]; 
            } 
            size--; 
        } 
    } 
    void print() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } 
        for (int i = 0; i < size; i++) { 
            cout<<queue[i]<<" <- ";
        } 
        cout <<endl;
    }
/*    //your code goes here

this part was copy from the google. */

    void add(int x) {
        size += 1;
        queue[size-1]=x;
    }
/* only this "add" function we have to create.*/    
}; 

int main() { 
    Queue q; 
    q.add(42); q.add(2); q.add(8); q.add(1); 
    q.print();
    q.remove(); 
    q.add(128); 
    q.print(); 
    q.remove(); 
    q.remove(); 
    q.print(); 

    return 0; 
}
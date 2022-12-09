/*
  
  This is all codes are the part of (FY) BSC.IT syllabus.
  SO, this all the code you can use it for your practicals.
  these are the all codes are for you.
  use it and grow it.
  THANK YOU!
  
  
  
  
#include<stdio.h>
 int  main()
{
    int i,n,a[100],small;
 
    printf("Enter the number of elements:\n") ;
    scanf("%d",&n) ;
 
    printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    
    small=a[0];
    for(i=1;i<n;i++)   
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("Smallest of %d elements in an array = %d",n,small);

return 0;
}

//--------------------------------------
  // HERE TO STARTS..
  
  
#include<stdio.h>

int main()
{
   int n, i;
   float num, sm;
  
   printf("How many numbers?\n");
   scanf("%d",&n);
   printf("Enter number-1: ");
   scanf("%f", &num);
   sm = num;
   i=2;
   while(i<=n)
   {
    printf("Enter number-%d: ",i);
    scanf("%f", &num);
    if(num < sm)
    {
     sm = num;
    }
    i++;
   }
   printf("\nSmallest = %0.2f", sm);
  
   return(0);
}

*/




/*
// 10th

#include<iostream> 
using namespace std;
template <class A> 
void sad(A &a, A &b) 
{ 
A t;
t=a; 
a=b; 
b=t; 
}; 
int main() 
{ 
//cout<<"sarvesh\'s program: 10th.#\n\n";
int n,m; 
float f1,f2; 
char c,d; 
cout<<endl<<"Enter two integers:\n"; 
cin>>n>>m; 
cout<<endl<<"Enter two floats:\n"; 
cin>>f1>>f2; 
cout<<endl<<"Enter two characters:\n"; 
cin>>c>>d;
cout<<"=============================";
cout<<endl<<"Integers before swapping\n"; 
cout<<"------------------------"; 
cout<<endl<<"N1=\t"<<n<<",\t\tN2=\t"<<m; 
swap(n,m); 
cout<<endl<<"\nIntegers after swapping\n"; 
cout<<"-----------------------"; 
cout<<endl<<"N1=\t"<<n<<",\t\tN2=\t"<<m; 
cout<<endl<<"\nFloats before swapping\n"; 
cout<<"------------------------"; 
cout<<endl<<"F1=\t"<<f1<<",\t\tF2=\t"<<f2; 
swap(f1,f2);
cout<<endl<<"\nFloats after swapping\n"; 
cout<<"------------------------"; 
cout<<endl<<"F1=\t"<<f1<<",\t\tF2=\t"<<f2; 
cout<<endl<<"\nCharacters before swapping\n"; 
cout<<"--------------------------"; 
cout<<endl<<"Char_1=\t"<<c<<",\t\tchar_2=\t"<<d; 
swap(c,d); 
cout<<endl<<"\nCharacters after swapping\n"; 
cout<<"-------------------------"; 
cout<<endl<<"Char_1=\t"<<c<<",\t\tchar_2=\t"<<d; 
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>

  
// 9th
#include<iostream> 
 
#include<fstream>
using namespace std;

int main() 
{ 
//cout<<"sarvesh\'s program: 9th.#\n\n";
ifstream fread("WordLineCount.txt"); 
int wc=1,lc=1; 
char c; 
while(fread)
{ 
fread.get(c);
}
if(c==' '|| c=='\n') 
wc++; 
if(c=='\n')
 
fread.close(); 
cout<<"\n Total no. of words in the file: "<<wc; 
cout<<"\n Total no. of lines in the file: "<<lc; 
return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>
 
//8th

#include<iostream>
using namespace std;

int main() 
{
  //cout<<"sarvesh\'s program: 8th.#\n\n";
float percent; 
cout<<"Enter your percentage: ";
cin>>percent; 
try 
{ 
if(percent<0 || percent>100) 
throw(percent); 
else 
cout<<endl<<"===========================\nMy percentages are:"<<percent; 
}
catch(int p) 
{ 
cout<<endl<<"Invalid percentage: "<<p; 
}
return 0; 
}

/*
// 7th.B

#include<iostream> 
#include<string> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
 // cout<<"sarvesh\'s program: 7th.B\n\n";
string str="now, Its going to reverse"; 
reverse(str.begin(), str.end()); 
cout<<str; 
string s1="MAN"; 
string s2="FEMALE"; 
if(s1<s2) 
cout<<endl<<endl<<s1<<" comes before "<<s2; 
else 
cout<<endl<<endl<<s2<<" comes before "<<s1;
return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 7th.A

#include<iostream> 
#include<string> 
using namespace std;
int main() 
{
  // cout<<"sarvesh\'s program: 7th.A\n"; 
string str1="SARVESH_"; 
string str2="&_JEEVAN"; 
cout<<endl<<"Length of "<<str1<<": "<<str1.length(); 
string str3=str1+str2; 
cout<<endl<<endl<<"==joined string==\n\n"<<str3;
return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 6th.B

#include<iostream> 
using namespace std; 
// Using abstract methods and classes. 
class Figure 
{ 
public: 
double dim1; 
double dim2; 
Figure(double a, double b) 
{ 
dim1 = a; 
dim2 = b; 
} 
// pure virtual function 
virtual double area()=0; 
}; 
class Rectangle:public Figure 
{ 
public: 
Rectangle(double a, double b):Figure(a,b) 
{ 
} 
// implement area for rectangle 
double area() 
{ 
cout<<"\nInside Area for Rectangle:"; 
return dim1 * dim2; 
} 
}; 
class Triangle:public Figure 
{
public: 
Triangle(double a, double b):Figure(a,b) 
{ 
} 
// implement area for right triangle 
double area() 
{ 
cout<<"\nInside Area for Triangle:"; 
return dim1 * dim2 / 2; 
} 
}; 
int main() 
{
 // cout<<"sarvesh\'s program: 6th.B\n"; 
  int r1,r2,t1,t2;
  cout<<"\nEnter 2-2 values:\n";
  cin>>r1>>r2>>t1>>t2;
Rectangle r(r1, r2); 
Triangle t(t1, t2); 
cout<< r.area(); 
cout<< t.area(); 
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>


// 6th.A
#include<iostream> 
using namespace std; 
class employee 
{ 
int emp_code,age; 
char name[30], qualification[30]; 
public: 
void get() 
{ 
cout<<"\nEnter employee id: "; 
cin>>emp_code; 
cout<<"\nEnter employee name: "; 
cin>>name; 
cout<<"\nEnter employee age: "; 
cin>>age; 
cout<<"\nEnter employee qualification: "; 
cin>>qualification; 
} 
 
void show() 
{ 
cout<<"\n\nEmployee id: "<<emp_code; 
cout<<"\tName: "<<name; 
cout<<"\nAge: "<<age<<"\t\tQualification: "<<qualification; 
} 
};
class contract_employee: public employee 
{ 
int contract_id; 
public: 
void get() 
{ 
cout<<"\nEnter contract_id: "; 
cin>>contract_id; 
} 
void show() 
{ 
cout<<"\nContract ID: "<<contract_id; 
} 
}; 
int main() 
{ 
//cout<<"sarvesh\'s program: 6th.A\n"; 
contract_employee ce; 
ce.get(); 
ce.show(); 
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>


// 5th.C
#include<iostream> 
using namespace std;
 
class person 
{ 
char name[30]; 
int age; 
public: 
void getdata() 
{ 
cout<<"\nEnter name and age:"; 
cin>>name>>age;
} 
void showdata() 
{ 
cout<<"\nName:"<<name; 
cout<<"\nAge:"<<age; 
} 
}; 
class student:public person 
{ 
int marks; 
public: 
void get() 
{ 
getdata(); 
cout<<"\nEnter marks:"; 
cin>>marks; 
} 
void show() 
{ 
showdata(); 
cout<<"\nMarks:"<<marks; 
} 
}; 
class employee:public person 
{ 
char design[30]; 
public: 
void get() 
{ 
getdata(); 
cout<<"\nEnter designation:"; 
cin>>design; 
} 
void show() 
{
showdata(); 
cout<<"\nDesignation:"<<design; 
} 
};
 
int main() 
{ 
//cout<<"sarvesh\'s program: 5th.C\n";
student s; 
employee e;

cout<<"\n===Enter student's data==="; 
s.get();

cout<<"\n===Enter employee's data==="; 
e.get();
 cout<<"========================";
cout<<"\n\n===student's Data==="; 
s.show();
 
cout<<"\n\n===Employee's Data==="; 
e.show();
 
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>


// 5th.B
#include<iostream> 
using namespace std; 
class internal 
{ 
int x; 
public: 
void get() 
{ 
cout<<"\nEnter value of x:"; 
cin>>x; 
} 
int x_return()
{ 
return x; 
} 
 
void show() 
{ 
cout<<"\n\nInternal marks:"<<x; 
} 
}; 
 
class external 
{ 
int y; 
public: 
void get() 
{ 
cout<<"\nEnter value of y:"; 
cin>>y; 
} 
int y_return() 
{ 
return y; 
} 
void show() 
{ 
cout<<"\nM:"<<y; 
} 
}; 
class final:public internal, public external 
{ 
float tot; 
public: 
void get()
{ 
internal::get(); 
external::get(); 
} 
void show() 
{ 
tot=internal::x_return()+external::y_return(); 
cout<<"\nAdition of x and y is Total:"<<tot; 
} 
}; 
int main() 
{ 
//cout<<"sarvesh\'s program: 5th.B\n"; 
cout<<"\n****simple addition program.****\n";
final t; 
t.get(); 
t.show(); 
return 0; 
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 5th.A
#include<iostream>
using namespace std;
class base
{
int a; 
public: 
void get() 
{ 
cout<<"\nEnter value for n:"; 
cin>>a; 
} 
 
void show() 
{ 
cout<<"\n\t\tN="<<a; 
} 
};
class derived:public base 
{ 
int b; 
public: 
void get() 
{ 
base::get(); //using scope resolution operator.
cout<<"\nEnter value for b:"; 
cin>>b;
cout<<"\n\t\tB="<<b;
} 
}; 
int main() 
{ 
//cout<<"sarvesh\'s program: 5rh.A\n";
derived d1; 
d1.get(); 
d1.show(); 
return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 4th.#
#include<iostream> 
using namespace std;

class negative
{ 
int x,y,z; 
public: 
void get() 
{ 
cout<<"\nEnter three numbers:\n"; 
cin>>x>>y>>z; 
} 
void show() 
{ 
cout<<"\n\nA="<<x<<",\t\tB="<<y<<",\t\tC="<<z; 
}
void operator -() 
{ 
x= -x; 
y= -y; 
z= -z; 
} 
};
int main() 
{ 
//cout<<"sarvesh\'s program: 4th.#\n";
negative n1; 
n1.get(); 
cout<<"\n\n Original contents"; 
n1.show(); 
-n1; 
cout<<"\n\n After the Negation"; 
n1.show(); 
return 0; 
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 3rd.
#include<iostream>
using namespace std;

class complex 
{ 
float n,m; 
public: 
complex() 
{ 
n=0; 
m=0; 
} 
complex(int a, int b) 
{ 
n=a; 
m=b; 
}
void showData() 
{ 
cout<< n <<" + j"<< m ; 
} 
complex sum(complex c1) 
{ 
complex c3; 
c3.n=n+c1.n; 
c3.m=m+c1.m; 
return c3; 
} 
}; 
int main() 
{
  int a,b,c,d;
 // cout<<"sarvesh\'s program 3rd.\n";
  cout<<"\n===Type 4 integer values===\n";
  cin>>a>>b>>c>>d;

complex obj1(a,b); 
complex obj2(c,d); 
complex obj3; 
obj3=obj1.sum(obj2); 
cout<<"\nComplex Number1: "; 
obj1.showData(); 
cout<<"\nComplex Number2: "; 
obj2.showData(); 
cout<<"\nComplex Number3: "; 
obj3.showData(); 
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 2nd.B
#include<iostream> 
 
using namespace std;
class distance2;
class distance1 
{ 
int feet;
int inch; 
public: 
void getData() 
{ 
cout<<"\nEnter feet:\t"; 
cin>>feet; 
cout<<"\nEnter inches: "; 
cin>>inch; 
} 
void showData() 
{ 
cout<< feet <<"'-" <<inch<<"\""; 
} 
friend void sum(distance1, distance2);
};

class distance2 
{ 
int feet,inch; 
public: 
void getData() 
{ 
cout<<"\nEnter feet: "; 
cin>>feet; 
cout<<"\nEnter inches: "; 
cin>>inch; 
} 
void showData() 
{ 
cout<< feet<<"'-"<<inch <<"\"" ; 
}
friend void sum(distance1, distance2); 
};

void sum(distance1 d1, distance2 d2) 
{ 
int f=d1.feet+d2.feet; 
int i=d1.inch+d2.inch; 
if(i>=12) 
{ 
i=i-12; 
f++; 
} 
cout<<f<<"'-"<<i<<"\""; 
} 
int main() 
{ 
 //cout<<"sarvesh\'s program: 2nd.B\n";
distance1 obj1; 
distance2 obj2; 
cout<<"\nEnter Data for 1st Distance \n"; 
cout<<"---------------------------"; 
obj1.getData(); 
cout<<"\nEnter Data for 2nd Distance \n"; 
cout<<"---------------------------"; 
obj2.getData(); 
cout<<"\nDistance1: "; 
obj1.showData(); 
cout<<"\nDistance2: "; 
obj2.showData(); 
cout<<"\nDistance3: "; 
sum(obj1,obj2);
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 2nd.A
#include<iostream> 
using namespace std;
class complex 
{ 
float n,m; 
public: 
void getData() 
{ 
cout<<"\nEnter real number: "; 
cin>>n; 
cout<<"\nEnter imaginary number: "; 
cin>>m; 
} 
void showData() 
{ 
cout<< n <<" + j"<< m ; 
} 
friend complex sum(complex, complex); 
}; 
complex sum(complex c1, complex c2) 
{ 
complex c3; 
c3.n=c1.n+c2.n; 
c3.m=c1.m+c2.m; 
return c3; 
} 
int main() 
{ 
//cout<<"sarvesh\'s program 2nd.A\n";
complex obj1, obj2, obj3; 
cout<<"\nEnter Data for 1st Complex Number\n";
obj1.getData(); 
cout<<"\nEnter Data for 2nd Complex Number\n"; 
cout<<"---------------------------------"; 
obj2.getData(); 
obj3=sum(obj1,obj2); 
cout<<"\nComplex Number1: "; 
obj1.showData(); 
cout<<"\nComplex Number2: "; 
obj2.showData();
cout<<"\nComplex Number3: "; 
obj3.showData(); 
return 0; 
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 1st B.
#include<iostream> 
using namespace std;

class student 
{ 
char name[20]; 
int age; 
float percentage;
void getData() 
{ 
cout<<endl<<"Enter name:"; 
cin>>name; 
cout<<endl<<"Enter age:"; 
cin>>age; 
cout<<endl<<"Enter percentage:"; 
cin>>percentage; 
} 
public: 
void displayData() 
{ 
getData(); 
cout<<endl<<"\tSTUDENT INFORMATION\n"; 
cout<<"\t-------------------"; 
cout<<endl<<" Name: "<<name; 
cout<<endl<<" Age: "<<age; 
cout<<endl<<" Percentage: "<<percentage; 
} 
}; 
int main() 
{
 // cout<<"sarvesh\'s program 1st.B\n";
student s; 
s.displayData();
return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  // 1st A
  
#include<iostream>
using namespace std;
class employee 
{ 
  char name[20]; 
int age; 
float basic_sal; 

void getInfo(){ 
cout<<endl<<"Enter name:"; 
cin>>name; 
cout<<endl<<"Enter age:"; 
cin>>age; 
cout<<endl<<"Enter basic salary:"; 
cin>>basic_sal; 
}
  
  public:

void displayInfo(){ 
getInfo(); 
cout<<"\n\n\tEMPLOYEE INFORMATION\n"; 
cout<<"\t--------------------"; 
cout<<"\n Name: "<<name; 
cout<<"\n Age: "<<age; 
cout<<"\n Basic Salary: "<<basic_sal; 
cout<<"\n Gross Salary: "<<basic_sal + (0.6*basic_sal) + (0.4*basic_sal);  
}
}; 


int main(){ 

//cout<<"sarvesh\'s program 1st.A\n";
employee e; 
e.displayInfo(); 
return 0;
}
*/
  



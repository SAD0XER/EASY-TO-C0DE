/*
#30DAYS30CODE CHALLENGE
#DAY06
Compiler version g++ 6.3.0
PROGRAM NAME: STUDENT INFORMATION.
*/

#include <iostream>
using namespace std;

int main()
{
  //variable declaration.
  int age, rollno, DOB, gender;
  double phoneno, whatsappno, PRNno;
  char address[100], fname[20], mname[20], lname[20], mothername[20], birthplace[20], clgname[50];
  
  //starting of forms.
  cout<<"============ STUDENT INFORMATION FORM ============"<<endl;
  cout<<"Enter your First Name: "<<endl;
  cin>>fname;
  cout<<"Enter your Middle Name: "<<endl;
  cin>>mname;
  cout<<"Enter your Last Name: "<<endl;
  cin>>lname;
  cout<<"Enter your Mother Name: "<<endl;
  cin>>mothername;
  cout<<"Enter your Address without giving space between them: "<<endl;
  cin>>address;
  cout<<"Enter your Birth Place: "<<endl;
  cin>>birthplace;
  cout<<"Enter your College Name: ";
  cin>>clgname;
  cout<<"\nEnter your Roll no.: ";
  cin>>rollno;
  cout<<"Enter your DATE OF BIRTH in the format of numbers like. ddmmyyyy..12032009: \n";
  cin>>clgname;
  cout<<"Enter your 10 digit Contact Number: \n";
  cin>>phoneno;
  cout<<"Enter your 10 digit Whatsapp Number: \n";
  cin>>whatsappno;
  cout<<"Enter your AGE: \n";
  cin>>age;
  cout<<"Enter your PRN NUMBER: \n";
  cin>>PRNno;
  cout<<"SELECT YOUR GENDER:\n1. MALE\n2.FEMALE\n3.OTHER\n";
  cin>>gender;
  
  // DISPLAYING DETAILS...
  
  cout<<"\n\n\n\nName: "<<fname<<" "<<mname<<" "<<lname<<endl;
  cout<<"Your Address: "<<address<<".\n";
  cout<<"Age: "<<age<<endl;
  cout<<"\t\t\t\t\tDATE OF BIRTH: "<<DOB<<endl;
  cout<<"Roll Number: "<<rollno;
  cout<<"\t\t\tName Of Your MOTHER: "<<mothername<<endl;
  cout<<"CONTACT NO: "<<phoneno<<"\t\t\tWHATSAPP NO: "<<whatsappno<<endl;
  cout<<"PRN no: "<<PRNno<<endl;
  
    return 0;
}
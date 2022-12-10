/*
  #30DAYS30CODE CHALLENGE
  #DAY03

  PROGRAM NAME: MATRIX MULTIPLICATION
 
  PROGRAMMER: PARAC0DER
 
  DATE: 10\10\2021
  
  Compiler version g++ 6.3.0
*/
   
 #include <iostream>
 using namespace std;
 int main()
 {
   cout<<"=====MATRIX MULTIPLICATION=====\n\n\n";
   
   //int m1[3][3] = {{0,0,0},{1,0,2},{0,2,1}}, m2[3][3] = {{0,0,0},{1,1,1},{1,1,1}},r[3][3], sum = 0;
   int m1[3][3], m2[3][3], r[3][3], sum=0, i, j;
   
   //Inserting elements in the array m1.
   cout<<"Enter the elememts in the array m1."<<endl;
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       cout<<"Enter the element at the position "<<i+1<<"\t"<<j+1<<":";
       cin>>m1[i][j];
       //cout<<"\t";
     }//loop 1.
     //cout<<endl;
   }//loop 2.
   
   //Inserting elements in the array m2.
   cout<<endl<<"Enter the elememts in the array m2."<<endl;
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       cout<<"Enter the element at the position "<<i+1<<"\t"<<j+1<<":";
       cin>>m2[i][j];
       //cout<<"\t";
     }//loop 1.
     //cout<<endl;
   }//loop 2.
   
   /*
   //displaying the matrix. //mark01
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       cout<<m1[i][j]<<"\t";
     }//first loop.
     cout<<endl;
   }//second loop.
   */
   
   //calculating matrix multiplication.
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       for (int k=0; k<3; k++)
       {
       sum += m1[i][k] * m2[k][j];
       
       }//end of loop 1.
       
       r[i][j] = sum;
       sum = 0;
     
     }// end loop 2.
     
   }//end loop 3.
   
   //displaying Resultant matrix.
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       cout<<r[i][j]<<"\t";
     }//first loop.
     cout<<endl;
   }//second loop.
   
   return 0;
}
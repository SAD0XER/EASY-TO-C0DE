#include<conio.h>
#include<iostream.h>
//Declaration of template class bubble
template<class bubble>
void bubble(bubble a[], int n){
int i, j;
//bubble sort algorithm inside bubble template
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
bubble b;
b=a[i];
a[i]=a[j];
a[j]=b;}}}}
void main(){
int arr[20],m,k,i;
char ch[20];
//clrscr();
//Taking values from the user
cout<<"Enter what type of elements you want to sort :\n1. int\n2. char\n";
cin>>m;
if(m==1){
cout<<"\nEnter the number of elements you want to enter:";
cin>>k;
cout<<"\nEnter elements:";
for(i=0;i<k;i++)
cin>>arr[i];
//call to bubble for inter sorting
bubble(arr,6);
cout<<"\nSorted Order Integers: ";
for(i=0;i<k;i++)
cout<<arr[i]<<"\t";}
else{
cout<<"\nEnter the number of characters you want to enter:";
cin>>k;
cout<<"\nEnter elements:";
for(i=0;i<k;i++)
cin>>ch[i];
//call to bubble for character sorting
bubble(ch,4);
cout<<"\nSorted Order Characters: ";
for(i=0;i<k;i++)
cout<<ch[i]<<"\t";}
getch();}

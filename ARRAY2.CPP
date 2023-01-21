#include<iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int arr[50],i,elem,pos,tot;
 cout<<"Enter size of array\n";
 cin>>tot;
 cout<<"Enter"<<tot<<"Array elements\n";
 for(i=0;i<tot;i++)
  {
   cin>>arr[i];
  }
  cout<<"Enter elemnt to Insert:\n";
  cin>>elem;
  cout<<"At what position ?\n";
  cin>>pos;
  for(i=tot;i>=pos;i--)
  {
   arr[i]=arr[i-1];
  }
  arr[i]=elem;
  tot++;
  cout<<"The new Array is :\n";
  for(i=0;i<tot;i++)
  {
  cout<<arr[i]<<" ";
  }
 getch();

}
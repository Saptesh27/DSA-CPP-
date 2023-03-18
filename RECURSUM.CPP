#include<iostream.h>
#include<conio.h>
int sum(int num)
{
 if(num!=0)
 {
  return num+sum(num-1);

 }
 return 0;
}
void main()
{
 int num;
 clrscr();
 cout<<"Enter the number: ";
 cin>>num;
 cout<<"sum is: "<<sum(num);
 getch();
}
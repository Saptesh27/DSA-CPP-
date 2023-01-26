#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,a[3][3],b[3][3],c[3][3];
 cout<<"--------------------Enter First Array:- ----------------------"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     cin>>a[i][j];
   }

 }
 cout<<"*******************First Array is:-***************************"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     cout<<a[i][j]<<"\t";
   }
   cout<<"\n";
 }

 cout<<"-----------------Enter Second Array---------------------------"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     cin>>b[i][j];
   }
 }

 cout<<"******************Second Array is*****************************"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     cout<<b[i][j]<<"\t";
   }
   cout<<"\n";
 }

 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     c[i][j]=a[i][j]+b[i][j];
   }
 }
 cout<<"/////////////////Addtion of Arrays are////////////////////////"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
   {
     cout<<c[i][j]<<"\t";
   }
   cout<<"\n";
 }

 getch();
}
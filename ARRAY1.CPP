#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[6],i,elem;
	cout<<"Enter 5 array element\n";
	for(i=0;i<5;i++)
	cin>>arr[i];
	cout<<"Enter element to insert\n";
	cin>>elem;
	arr[i]=elem;
	cout<<"The new array is\n";
	for(i=0;i<6;i++)
	{
	 cout<<arr[i]<<"\n";
	}
	getch();

}

/*task1				
#include<iostream>
using namespace std;
int main()
{
	int num1=0;
	int num2=0;
	int num3=0;
	int *ptr1;
	ptr1=&num1;
	int *ptr2;
	ptr2=&num2;
	int *ptr3;
	ptr3=&num3;	
	cout<<"Enter the first value:";
	cin>>num1;
	cout<<"Enter the second value:";
	cin>>num2;
	cout<<"Enter the third value:";
	cin>>num3;
	cout<<"The memory address of first value is:"<<ptr1<<endl;
	cout<<"The memory address of second value is:"<<ptr2<<endl;
	cout<<"The memory address of third value is:"<<ptr3<<endl;
	return 0;
}*/
/*task2
#include<iostream>
using namespace std;
void pointers(int *ptr1, int *ptr2, int *ptr3, int *ptr4)
{
	cout<<"The first value before swapping is:"<<*ptr1<<endl;
	cout<<"The second value before swapping is:"<<*ptr2<<endl;
	cout<<"The third value before swapping is:"<<*ptr3<<endl;
	cout<<"The fourth value before swapping is:"<<*ptr4<<endl;
	int n=0;
	n=*ptr1;
	*ptr1=*ptr2;
	*ptr2=n;
	n=*ptr3;
	*ptr3=*ptr4;
	*ptr4=n;
	cout<<"The first value after swapping is:"<<*ptr1<<endl;
	cout<<"The second value after swapping is:"<<*ptr2<<endl;
	cout<<"The third value after swapping is:"<<*ptr3<<endl;
	cout<<"The forth value after swapping is:"<<*ptr4<<endl;
}
int main()
{
	int num1=0;
	int num2=0;
	int num3=0;
	int num4=0;
	int *ptr1;
	int *ptr2;
	int *ptr3;
	int *ptr4;
	cout<<"Enter the first value:";
	cin>>num1;
	cout<<endl;
	cout<<"Enter the second value:";
	cin>>num2;
	cout<<endl;
	cout<<"Enter the third value:";
	cin>>num3;
	cout<<endl;
	cout<<"Enter the fourth value:";
	cin>>num4;
	
	ptr1=&num1;
	ptr2=&num2;
	ptr3=&num3;
	ptr4=&num4;
	pointers(ptr1,ptr2,ptr3,ptr4);
	return 0;
}*/
/*task3
#include<iostream>
using namespace std;
void inputarray(int array[5])
{
	int *ptr;
	ptr=array;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the "<<i+1<<" value:";
		cin>>*ptr;
		ptr++;
	}
}
int main()
{
	int *ptr;
	int array[5];
	inputarray(array);
	ptr=array;
	for(int i=0; i<5; i++)
	{
		cout<<"The"<<i+1<<" value using pointer are"<<*ptr<<endl;
		ptr++;
	}
	return 0;
}*/
/*task4
#include<iostream>
using namespace std;
void comparison_function(int user,int *num1,int *num2,int *num3)
{
	int average=0;
	
	if(user==1)
	{
		if(*num1>*num2 && *num1>*num3)
		{
		cout<<"The number 1 is greatest."<<endl;
		}
		else if(*num2>*num1 && *num2>*num3)
		{
		cout<<"The number 2 is greatest."<<endl;
		}
		else if (*num3>*num1 && *num3>*num2)
		{
		cout<<"The number 3 is greatest."<<endl;
		}
		else
			cout<<"You entered the wrong number."<<endl;
	}
	if(user==2)
	{
		if(*num1<*num2 && *num1<*num3)
		{
			cout<<"The number 1 is smallest."<<endl;
		}
		else if(*num2<*num1 && *num2<*num3)
		{
			cout<<"The number 2 is smallest."<<endl;
		}
		else if(*num3<*num1 && *num3<*num2)
		{
			cout<<"The number 3 is smallest."<<endl;
		}
		else 
			cout<<"You entered the wrong number."<<endl;
	}
	if(user==3)
	{
		average=*num1+*num2+*num3;
		cout<<"The average of 3 numbers is:"<<average<<endl;
	}
}
int main()
{

	int num1;
	int *ptr1;
	ptr1=&num1;
	int num2;
	int *ptr2;
	ptr2=&num2;
	int num3;
	int *ptr3;
	ptr3=&num3;
	int user;
	cout<<"Enter the first value:";
	cin>>num1;
	cout<<endl;
	cout<<"Enter the second value";
	cin>>num2;
	cout<<endl;
	cout<<"Enter the third value:";
	cin>>num3;
	cout<<endl;
	do
	{
	cout<<"1. Find Largest number."<<endl;
	cout<<"2. Find the Smallest number."<<endl;
	cout<<"3. Find average."<<endl;
	cout<<"4. End."<<endl;
	cout<<"Enter the number according to menu to perform the desired task:";
	cin>>user;
	comparison_function(user,ptr1,ptr2,ptr3);
	}
	while(user!=4);
	return 0;
}*/



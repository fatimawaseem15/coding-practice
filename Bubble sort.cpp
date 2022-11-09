#include<iostream>
using namespace std;

void bubble_sort(int arr[], int s)
{
	 cout<<"\nSorted array \n";
	for(int i=0 ; i<s-1 ; i++)
	{int flag=0;
		for(int j=0 ; j<s-1-i; j++)
		{
			
			if(arr[j]>arr[j+1])
			{
			  int temp=0;
			  temp=arr[j];
			  arr[j]=arr[j+1];
			  arr[j+1]=temp;
			  flag=1;
			}
		}
			if(flag==0)
	{
	break;
	}
	}
}
void show(int arr[] , int s)
{
	cout<<"Array is:\n";
for(int i=0;i<s;i++)
{
cout<<arr[i]<<" ";
}
}

int main()
{
	int s;
	cout<<"Enter the size of array\n";
	cin>>s;
	int arr[s];
	for(int i=0 ; i<s ; i++)
	{
		cout<<"Enter the number ";
		cin>>arr[i];
	}
      show(arr,s);
      bubble_sort(arr,s);
      show(arr,s);
	
}


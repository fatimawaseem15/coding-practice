#include<iostream>
using namespace std;

class Stack
{
private:
int top;
int arr[5];
public:
stack()
{
	top==-1;
	for(int i=0 ;i<5 ; i++);
	arr[5]=0;
	}	
bool isempty()
{
	if(top==-1)
	{
	cout<<"Your stack is Empty\n";	
	return true;
	}
	else
	return false;
}
bool isfull()
{
	if(top==4)
	{
		cout<<"Stack overflow\n";
		return true;
	}
	else
	return false;
}
void push(int val)
{
 if (isfull())
 {
 	cout<<"Stack overflow\n";
 }
 else
 {
 	top++;
 	arr[top]=val;
 	
 }
}
int pop()
{
	if (isempty())
	{
		cout<<"Stack Overflow\n";
	}
	else
	{
		int popvalue=arr[top];
		arr[top];
		top--;
		return popvalue;
	}
}
int count()
{
	return top+1;
}
int peak(int pos)
{
	if(isempty())
	{
		cout<<"Stack underflow\n";
	return 0;
	}
	else
	{
		cout<<"The value at: "<<pos<<"is  "<<arr[pos];
	}
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<arr[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
};
int main()
{
	char st;
	cout<<"Yes 'y'/No 'n'\n";
	cin>>st;
	while(st=='y')
	{
		char num;
	cout<<" Please Select\n";
    cout<<"a)-Pop\n";
    cout<<"b)-Push\n";
    cout<<"c)-Count\n";
    cout<<"d)-Peak\n";
    cin>>num;
	Stack s;
	switch (num)
	{
		case 'a':		
			s.pop();
			s.display();
			break;
			
		case 'b':
			
			s.push(20);
			s.push(30);
			s.push(40);
			s.push(50);
			s.push(60);
			s.display();
			
			break;
		case 'c':
			s.count();
			s.display();
			break;
		case 'd':
			s.peak(50);
			s.display();
			break;}
	

				
}
}

#include<iostream>
using namespace std;

int permutation(int n, int r)
{
  if(r>0)
  return n*permutation(n-1,r-1);
  if(r==0)
  {
  	return 1;
  }
  
}

int combination(int n, int r)
{
	if(r>0)
	{
		return (1.0*combination(n-1,r-1)*n)/r;
	}
	if(r==0)
	{
		return 1;
	}
 
}

int main()
{
	
  int num1,num2,choice;
  char a;

  cout<<"Enter the value of n: ";
  cin>>num1;
  cout<<"Enter the value of r: ";
  cin>>num2;
  try
  {
  	if(num1<0||num2<0)
  	throw num1;
    if(num1<num2)
  	{
  		throw 'a';
	  }
	
  }
  catch(int)
  {
  	cout<<"\nThe value of n and r must be greater than 0";
  	exit(0);
  }
  catch(char)
  {
  	cout<<"\nThe value of n is less than r.";
  	exit(0);
  }
  cout<<"\nEnter the operation to perform:";
  cout<<"\n1.Permutation";
  cout<<"\n2.Combination";
  cout<<"\nchoice: ";
  cin>>choice;
  if(choice==1)
  {
  	cout<<"\nThe permutation is: "<<permutation(num1,num2);
  }
  else if(choice==2)
  {
  	cout<<"\nThe combination is: "<<combination(num1,num2);
  }
  else
  {
  	cout<<"\nEnter a valid choice";
  }
  return 0;
}

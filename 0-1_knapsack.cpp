#include <iostream> 
using namespace std; 
int max(int a, int b) { return (a > b)? a : b; } 
int knapSack(int W, int wt[], int val[], int n) 
{ 
if (n == 0 || W == 0) 
	return 0; 
if (wt[n-1] > W) 
	return knapSack(W, wt, val, n-1); 
else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
	knapSack(W, wt, val, n-1) ); 
} 
int main() 
{ 
	int val[15],wt[15];
	int n,i,W;
	cout<<"Enter the number of items : ";
	cin>>n;
	cout<<endl<<"Enter the  values :- \n";
	for(i=0;i<n;i++)
	{
		cout<<"Value of item "<<i+1<<" is : ";
		cin>>val[i];
	}
	cout<<endl<<"Enter the weights :- \n";
	for(i=0;i<n;i++)
	{
		cout<<"Weight of item "<<i+1<<" is : ";
		cin>>wt[i];
	}	
	cout<<"\nNow enter the capacity of kanpsack : ";
	cin>>W;
	cout<<endl<<"The maximum profit is : "<<knapSack(W, wt, val, n)<<endl;
	return 0; 
} 
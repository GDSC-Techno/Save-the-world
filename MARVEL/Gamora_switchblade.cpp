#include<iostream>
using namespace std;

int main()
{   
    cout<<"\n<THANOS'-QUOTE>\n"<<endl;
    
	int n=6;
	for(int i=0; i<n; i++)
	{
		for(int k=n-1; k>i; k--)
		{
			cout<<" ";
		}
		
		for(int j=0; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0; i<n+4; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"= ";
		}
		cout<<endl<<endl;
	}
	
	//add code here
  	for (int i=n; i>=1;i--)
	   {
    		for (int k=n-i;k>0;k--) 
			{
      			cout << " ";
   			}			
    		for (int j=i;j>0;j--)
			{
    		  	cout << "* ";
    		}
      main
    		cout << endl;
  		}
}
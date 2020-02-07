#include <iostream>
#include <cstdlib>

using namespace std;

void bubble(int [], int );
void bubble2(int [], int );

int main(void)
{
	int a[5]={34,1334,40,15,78};
	int b[5]={25,10,32,123,35};

	bubble(a,4);
	cout<<"For 25,10,40,15,35 sorting Min to Max:\n"<<endl;
	for(int i=0;i<5;i++){
	
		cout<<a[i]<<"\t"<<endl;}
		
		
    cout<<"For 25,10,40,15,35 sorting Max to Min :\n\n"<<endl;
	bubble2(b,5);
	for(int i=0;i<5;i++){
	
		cout<<b[i]<<"\t";}

	return 0;
}
void bubble(int x[], int n)
{
	int temp,i,flag;
	do{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(x[i]>x[i+1])
			{
				temp=x[i];
				x[i]=x[i+1];
				x[i+1]=temp;
				flag=1;
			}
		}
		n--;
	}while(flag==1);	
}
void bubble2(int x[], int n)
{
	int temp;
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			if(x[j]<x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}


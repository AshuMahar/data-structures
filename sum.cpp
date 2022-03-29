#include <iostream>
using namespace std;

int main()
{
    int ar[100];
    int n;
    int key;
    int count=0;
    cout << "Enter no of elements you want in the array" << endl;
    cin >> n;
    cout << "Enter the  elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
	for(int j = 1; j  < n; j++)
	{
		if(i!=j){		
		for(int k =0; k < n ;k++)
		{
			if(ar[i]+ar[j]==ar[k])
			cout<<ar[i]<<"+"<<ar[j]<<"="<<ar[k]<<endl;
		}    }
	}
    }
}

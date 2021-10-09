#include<iostream>
using namespace std;
void bubble(int ar[], int n)
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n- i-1; j++)
        {
            if(ar[j]>ar[j+1])
            swap(ar[j],ar[j+1]);
        }
    }
         for (int j = 0 ; j < n; j++)
        {  
            
           cout<<ar[j]<<" ";
            
       }
    }
    

int main()
{
    int ar[100];
    int n;
    int key;
    cout << "Enter no of elements you want in the array" << endl;
    cin >> n;
    cout << "Enter the  elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
       bubble(ar, n);
}
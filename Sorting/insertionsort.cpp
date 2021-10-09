#include<iostream>
using namespace std;
void insertion(int ar[],int n)
{
    for (int  i = 0; i <= n-1; i++)
    {
        int current=ar[i];
        int prev=i-1;
        while (prev>0 and ar[prev]>current)
        {
            ar[prev+1]=ar[prev];
            prev=prev-1;
        }
        
          ar[prev+1]=current;
    }
     for (int  i = 0; i <= n-1; i++)
    {
        cout<<ar[i]<<" ";
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
       insertion(ar, n);
   /*    for (int  i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    */
}
#include<iostream>
using namespace std;
int main()
{
    int ar[100];
    int n;
    cout<<"Enter no of elements you want in the array"<<endl;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
     for(int i =0;i<n;i++)
    {
       cout<<ar[i]<<"\n";
    }
    return 0;
}
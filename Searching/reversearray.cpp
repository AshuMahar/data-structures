#include <iostream>
using namespace std;
void reversearray(int ar[], int n )
{
    int s =0;
    int e = n-1;
    while(s<e)
    {
        swap(ar[s],ar[e]);
        s++;
        e--;
    }

}
int main()
{
    int ar[100];
    int n;
    int key;
      cout<<"Enter no of elements you want in the array"<<endl;
    cin>>n;
     cout<<"Enter the  elements"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    reversearray( ar, n );
    for(int i =0;i<n;i++)
    {
        cout<<ar[i]<<" " ;
    }
}
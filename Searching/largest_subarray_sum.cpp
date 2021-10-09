#include <iostream>
using namespace std;
int subarrayssum(int ar[], int n)
{
    int sum=0;
      int x=1;
      int largest_sum=0;
    for (int i = 0; i < n; i++)
    {
      
        for (int j = i ; j < n; j++)
        {
            int sum=0;
            for (int k = i ; k < j; k++)
            {
                 cout <<ar[k]<<",";
                  sum = sum+ar[k];
                  
            }
            cout<<endl;
              largest_sum=max(largest_sum,sum);
              
        }
        
    }
    return largest_sum;
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
       cout<<"Largest sub array sum is =";
    cout<<subarrayssum(ar, n);
}
#include <iostream>
using namespace std;
void subarrays(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
       
        for (int j = i ; j < n; j++)
        {
            for (int k = i ; k < j; k++)
            {
                 cout <<ar[k]<<",";
            }
            
           cout<<endl;
        }
        
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
    subarrays(ar, n);
}
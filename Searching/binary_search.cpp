#include <iostream>
using namespace std;
int binary_search(int ar[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (ar[mid] == key)
        {
            return mid;
        }
        else if (ar[mid] < key)
            e = mid - 1;

        else if (ar[mid] > key)
            s = mid + 1;

       
    }
     return -1;
}
int main()
{
    int ar[100];//C:\Users\Ashutosh\Documents\datastructures\sorting
    int n;
    int key;
    cout << "Enter no of elements you want in the array" << endl;
    cin >> n;
    cout << "Enter the  elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Enter the  element you want to search " << endl;
    cin >> key;
    int index = binary_search(ar, n, key);
    if (index != -1)
    {
        cout << "Element " << key << " found at  " <<++index<< endl;
    }
    else
        cout << "Element not found" << endl;
}

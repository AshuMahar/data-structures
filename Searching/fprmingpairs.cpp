#include <iostream>
using namespace std;
void pairs(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = ar[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = ar[j];
            cout <<"\n"<< x << "," << y << endl;
        }
        cout<<endl;
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
    pairs(ar, n);
}
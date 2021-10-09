#include <iostream>
using namespace std;
int subarrayssum_using_prefix(int ar[], int n)
{   //in prefix we will take another array and store the sum of elements before it
    //ex ar1=1,2,3,-2,4   sum=1,3,6,4,8
    int prefix[n];
    prefix[0] = ar[0];
 
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + ar[i];
    }
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            //put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum, subarraySum);
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
    cout << "Largest sub array sum is =";
    cout << subarrayssum_using_prefix(ar, n);
}
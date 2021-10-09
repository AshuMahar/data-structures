#include<iostream>
using namespace std;
int lenear_search(int ar[] , int n , int key)
{
    for (int  i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            return i;
        
        }
       
    }
    return -1;
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
    cout<<"Enter the  element you want to search "<<endl;
    cin>>key;
   int index= lenear_search( ar ,  n , key);
     if (index != -1)
        {
            cout<<"Element "<<key<<" found at  "<<index+1<<endl;
        
        }
        else
        cout<<"Element not found"<<endl;
}  
    

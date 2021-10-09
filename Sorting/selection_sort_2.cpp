#include<iostream>
using namespace std;
void selection(int ar[], int n)
{
   /* for(int pos = 0; pos <= n-2; pos++){

		int current = a[pos];
		int min_position = pos;

		//find out the element 
		for(int j=pos; j<n; j++){

			if(a[j] < a[min_position]){
				min_position = j;
			}

		}
		//swap outside the loop
		swap(a[min_position],a[pos]);*/
	
   for (int i = 0; i <= n-2; i++)
    {
        
        int current=ar[i];
        int minimum=i;
        for (int j = i; j < n; j++)
        {
            //finding the position of the smallest element in the remaning array
            if(ar[j]<ar[minimum])
            {
                 minimum=j;

            }
        }
        swap(ar[minimum],ar[i]);
        
        
    }
     for (int j = 0 ; j < n; j++)
        {  
            
           cout<<ar[j]<<" ";
            
       }
}
int main()

{
    int ar[]={8,9,25,-1,-3,3,2,1,-8};
    int n=sizeof(ar)/sizeof(int);
    
      selection(ar, n);
}
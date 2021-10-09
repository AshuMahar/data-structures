#include<iostream>
#include<vector>
using namespace std;
void count(int a[], int n)
{
       int largest;
       for (int j = 0 ; j < n; j++)
        {  
     largest = max(largest ,a[j]);
        }
        vector<int> freq(largest+1,0);

	//Update the freq array 
	for(int i=0;i<n;i++){
		freq[a[i]]++;
        cout<<freq[a[i]]<<" ";
	}
    

	//Put back the elements from freq into original array

	int j = 0;
	for(int i=0; i<=largest; i++){

		while(freq[i]>0){
			a[j] = i;
			freq[i]--;
			j++;
		}
	}
	 for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
  
}
int main()

{
      int ar[]={1,5,10,85,65,3,2,1};
    int n=sizeof(ar)/sizeof(int);
    
     count(ar, n);
     
}
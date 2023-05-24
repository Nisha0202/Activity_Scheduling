#include <bits/stdc++.h>

using namespace std; 

 
struct A 
{ 
    int start;
    int finish; 
}; 

//compare
bool Sort_activity(A a, A b) 
{ 
    return (a.finish< b.finish); 
} 


void Activities(A arr[], int n) 
{ 
	sort(arr, arr+n, Sort_activity); 
 
  int count = 1; // first one will print without compare
    
    int i = 0 ;

    for (int j = 1; j < n; j++) 
    { 
      	if (arr[j].start>= arr[i].finish) 
      	{	
			//cout<< "(" <<arr[j].start<< ", "<<arr[j].finish << ") \n"; 
			count++ ; i++;
      	} 
    }
  printf("%d", count);
} 
 
int main() 
{   int n;
    cin>>n;
    A arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i].start>>arr[i].finish;
    }

	Activities(arr, n); 
    return 0; 
}
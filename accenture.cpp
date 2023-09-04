// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest
// subarray whose bitwise XOR is equal to K
int LongestLenXORK(int arr[], int N)
{
	//To store final answer
	int ans=0;
	
	//Find all subarray
	for(int i=0;i<N;i++){
		//To store length of subarray
	
		//To store XOR of all elements of subarray
		int temp=0;
    int k=0;
		for(int j=i;j<N;j++){
			temp=temp^arr[j];
      k+=arr[j];
			
			
			//When XOR of all elements of subarray equal to K
			if(temp==k){
				//Update ans
				ans=max(ans,j-i+1);
			}
		}
	}
	
	return ans;
}

// Driver Code
int main()
{
	int arr[] = {1 ,3, 8, 48, 10};
	int N = sizeof(arr) / sizeof(arr[0]);
	// int k=
	cout<< LongestLenXORK(arr, N);

	return 0;
}

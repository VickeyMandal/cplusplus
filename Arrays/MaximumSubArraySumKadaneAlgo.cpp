//Maximum Sub Array Sum
//Time Complexity: O(n)

#include <bits/stdc++.h> 
#include <iostream>
 
using namespace std;

//Kadane's Algorithm
int MaxSumArr(int arr[],int n, int maxSum, int currSum){
    
    for(int i = 0 ; i< n ; i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

int main(){
    int arr[100] = {0};
    int n;
    cin>>n;
    int currSum = 0;
    int maxSum = 0;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<MaxSumArr(arr,n,maxSum,currSum);
}
//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void countingSort(int arr[], int n, int exp){
    vector<vector<int>> vec(10);
    for(int i = 0; i<n; i++){
        int digit = (arr[i]/exp)%10;
        vec[digit].push_back(arr[i]);
    }
    
    int j = 0;
    for(vector<int>& vect: vec){
        int k = vect.size();
        if(k != 0){
            int i  = 0;
            while(i<k){
                arr[j++] = vect[i++];
            }
        }
    }
}

void radixSort(int arr[], int n) 
{ 
   // code here
   int largest = *max_element(arr, arr + n);
   for(int exp = 1; largest/exp > 0; exp*=10){
       countingSort(arr, n, exp);
   }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        map<char, int> mpp;
        for(auto &ch: arr){
            mpp[ch]++;
        }
        
        string result =  "";
        for(auto it: mpp){
            char charact = it.first;
            int count = it.second;
            while(count--){
                result += charact;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        bool flag = false;
        for(int i = 0; i<n; i++){
            for(int j = 1; j < n-i; j++){
                if(arr[j-1]>arr[j]){
                    swap(arr[j-1], arr[j]);
                    flag = true;
                }
            }
            
            if(!flag){
                break;
            }
        }
    }
};

/* 
• Depends on structure or content ?
• Both
• Internal/External sort algorithm ?
• Internal
• Stable/Unstable sort algorithm ?
• Stable
• Best case time complexity ?
• O(n)
• Worst case time complexity ?
• O(n2)
• Algorithmic Approach?
• Subtract and Conque
*/

//{ Driver Code Starts.

// Driver program to test above functions
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
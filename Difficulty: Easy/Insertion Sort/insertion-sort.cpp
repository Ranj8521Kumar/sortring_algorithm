//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to sort the array using insertion sort algorithm.
    vector<int> insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i = 1; i<n; i++){
            int key =arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        return arr;
    }
};

/* 
Depends on structure or content ?
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

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.insertionSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
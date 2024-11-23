//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i<n; i++){
            int min = arr[i];
            int loc = i;
            
            for(int j = i + 1; j<n; j++){
                if(min>arr[j]){
                    min = arr[j];
                    loc = j;
                }
            }
            swap(arr[i], arr[loc]);
        }
    }
};

/* Depends on structure or content ?
• Structure
• Internal/External sort algorithm ?
• Internal
• Stable/Unstable sort algorithm ? 
• Unstable
• Best case time complexity ?
• O(n2)
• Worst case time complexity ?
• O(n2)
• Algorithmic Approach?
• Subtract and Conque
*/

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        obj.selectionSort(a);

        Array::print(a);
        cout << "~" << endl;
    }
}

// } Driver Code Ends
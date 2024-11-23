//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    void merge(vector<int>& arr, int low, int mid, int high){
        int n1 = mid - low + 1;
        int n2 = high  - mid;
        
        vector<int> left(n1), right(n2);
        
        for(int i = 0; i<n1; i++){
            left[i] = arr[low + i];
        }
        
        for(int i = 0; i<n2; i++){
            right[i] = arr[i + mid + 1];
        }
        
        int i =  0;
        int j = 0;
        int k = low;
        while(i<n1 && j<n2){
            if(left[i] <= right[j]){
                arr[k] = left[i];
                i++;
            }else{
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        
        while(i<n1){
            arr[k] = left[i];
            i++;
            k++;
        }
        
        while(j<n2){
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if (l >= r) return;
        
        int mid  = l + (r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

/* 
Depends on structure or content ?
• Structure
• Internal/External sort algorithm ?
• External
• Stable/Unstable sort algorithm ?
• Stable
• Best case time complexity ?
• O(nlogn)
• Worst case time complexity ?
• O(nlogn)
• Algorithmic Approach?
• Divide and Conque
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
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
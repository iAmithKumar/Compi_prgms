#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){

        long long int i, j, t;
        vector<long long> arr2;
        
        if(k > n){
            k = n;
        }
        
        for(j=0; j<n; j+=k){
            t = j + k - 1;
            if(t>n){
                t=n -1 ;
            }
           for(i=t; i>=j; i--){
                arr2.push_back(arr[i]);
            } 
        }
        
        arr.clear();
        
        for(i=0; i<arr2.size(); i++){
                arr.push_back(arr2[i]);
        }
        
    }
};

int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}


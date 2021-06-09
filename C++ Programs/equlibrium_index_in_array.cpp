#include <iostream>
using namespace std;

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int i, m, mid_ele, left_sum=0, sum=0;
        
        for(i=0; i<n; i++){
            sum+=a[i];
        }
        
        for(i=0; i<n; i++){
            
            sum = sum - a[i];
            
            if(sum == left_sum){
                return i+1;
            }
            
            left_sum = left_sum + a[i];
            
        }
        
        return -1;
    }

};


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

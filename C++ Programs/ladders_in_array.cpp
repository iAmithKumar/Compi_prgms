// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <iostream>
#include <vector>
using namespace std;


 // } Driver Code Ends

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> lad;
        vector<int> revlad;
        int i, j;
        int max = a[n-1];
        for(i=(n-1); i>=0; i--){
            
            if( a[i] >= max ){
                max = a[i];
                lad.push_back(a[i]);
            }
        }
        
        for(i=lad.size()-1; i>=0; i--){
            revlad.push_back(lad[i]);
        }
        //revlad.push_back(a[n-1]);
        return revlad;
    }
    
};

// { Driver Code Starts.

int main()
{

       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

}
  // } Driver Code Ends
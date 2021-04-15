#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 5,1,3,4,6,2,0,10 };
    int win_sum = 0, k, i, max_sum = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Enter the frequency to find max sum: ";
    cin >> k;
    
    int n = k;
    
    for(i=0; i<n; i++){
            win_sum = win_sum + arr[i];
    }
    
    max_sum = win_sum;
    for(i=1; i<=len-n; i++ ){
        win_sum = win_sum - ( arr[i-1] ) + ( arr[i+n-1] ) ;
        cout << win_sum << "  ";
        if(win_sum > max_sum){
            max_sum = win_sum;
        }
    }
    
    cout << endl << max_sum;

    return 0;
}

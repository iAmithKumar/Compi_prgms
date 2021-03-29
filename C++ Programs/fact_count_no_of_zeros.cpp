#include <iostream>

using namespace std;

int fact(int n){
    if(n==1 || n==0) {
        return 1; 
    }
    
    else{
       return n*fact(n-1); 
    }
}

int main()
{
    int n,factorial, count=0;
    cout <<"Enter the number: ";
    cin >> n;
    
    factorial = fact(n);
  
    cout <<"Factorial is: " << factorial << endl;
    
    while(factorial%10 == 0){
        factorial = factorial/10;
        count++;
    }
    
    cout <<"Count of zeros is: " << count;
    return 0;
}

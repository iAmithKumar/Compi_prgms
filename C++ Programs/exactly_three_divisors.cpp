#include<stdio.h>

using namespace std;

int exactly3Divisors(int N)
    {
        //Your code here
        int num=2, count, j=0;
        while(num<N){
            count = 0;
            for(int i=1; i<N; i++){
                if(num%i==0){
                    count++;
                }
            }
            if(count==3){
                    j++;
                }
            num++;
        }
        return j;
        
}

int main(void){
	int n, div;
	cout<< "Enter the number: ";
	cin>> n;
	
	div = exactly3Divisors(n);
	
	cout<< div << endl;
	
}

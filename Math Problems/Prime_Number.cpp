#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    if(n<=1){
        cout<<"Not a prime number"<<endl;
        return;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            return;
        }
    }
    cout<<"Prime number"<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkPrime(n);
    return 0;
}
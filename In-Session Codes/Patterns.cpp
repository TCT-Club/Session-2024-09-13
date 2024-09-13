#include <iostream>
using namespace std;

// Practise Exercise for Patterns
    
/*
    Pattern - 1
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    Pattern - 2
    * 
    * *
    * * *
    * * * *
    * * * * *
    
    Pattern - 3
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    Pattern - 4
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    Pattern - 5
    * * * * *
    * * * *
    * * *
    * *
    * 
    
    Pattern - 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

    Pattern - 7
        *
       ***
      *****
     *******
    *********
    
    Pattern - 8
    *********
     *******
      *****
       ***
        *
    
    Pattern - 9
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
    
    Pattern - 10
    *
    **
    ***
    ****
    *****
    *****
    ****
    ***
    **
    *
*/

void pattern_1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern_2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern_3(int n){
    
}

void pattern_4(int n){
    
}

void pattern_5(int n){
    
}

void pattern_6(int n){
    
}

void pattern_7(int n){
    
}

void pattern_8(int n){
    
}

void pattern_9(int n){
    
}

void pattern_10(int n){
    
}

int main(){
    int n = 5;
    // pattern_1(n);
    // pattern_2(n);
    // pattern_3(n);
    // pattern_4(n);
    // pattern_5(n);
    // pattern_6(n);
    // pattern_7(n);
    // pattern_8(n);
    // pattern_9(n);
    // pattern_10(n);
    return 0;
}
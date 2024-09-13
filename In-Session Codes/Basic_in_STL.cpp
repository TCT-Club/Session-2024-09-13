#include <bits/stdc++.h>
using namespace std;

int main(){
    // Vector
    
    vector<int> v = {1,2,3,4,5,6,7,8,9,10}; // Initialization
    v.push_back(11); // Insertion
    v.pop_back(); // Deletion
    for(int i=0; i<v.size(); i++){ // In this we use size() function to get the size of the vector
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Another way to initialize vector
    vector<int> v1(10,0);
    // In this we use 10 as the size of the vector and 0 as the value of the elements
    // So, now there will be 10 elements in the vector and all of them will have the value of 0


    // Sort() function

    sort(v.begin(), v.end()); // Sorts the vector in ascending order
    // In this we use begin() and end() functions to specify the range of the vector
    int arr[10] = {56, 23, 45, 12, 67, 34, 89, 10, 3, 1};
    sort(arr, arr+10); // Sorts the array in ascending order
    // In this we use the array name as the begin pointer and the address of the last element as the end pointer
    return 0;
}
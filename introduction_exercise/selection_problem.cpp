// Selection Problem - sorting the array in descending order.
// Selecting the number at N/2 position.


#include <bits/stdc++.h>
using namespace std;

int main() {

    int N[] = {1,2,3,23,45,4365,2984,4354,2,6,7,8,9};
    double start = clock();
    int n = sizeof(N)/sizeof(int);
    sort(N, N + n, greater<int>());
    int k = n/2;
    int ans = N[k];
    
    double end = clock();
    
    cout<<"The value of ans is "<<ans<<endl;
    cout<<"Time taken "<<end-start<<endl;

    return 0;
}

// sizeof() - gives the total length of the bytes.
// length of array = sizeof(N)/sizeof(int)
// sort(arr, arr+n, greater<int>()) -- for descending values
// sort(arr, arr+n) -- for ascending values
// length of a string = s.length()
// PrintDigit
// PrintDigit only prints one digit at a time. Here printing any arbitrary number with only PrintDigit recursively.


#include <bits/stdc++.h>
using namespace std;

void PrintDigit(int value){
    if(value<0){
        value = 0-value;
        cout<<"-";
    }
    
    if(value<10){
        cout<<value;
        return;
    }
    
    PrintDigit(value/10);
    
    PrintDigit(value%10);
}

int main(){
    
    int a = 500;
    PrintDigit(a);
    
}
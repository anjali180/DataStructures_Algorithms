// A header.h file is include here. It is include by using only "", indicating to look in the present folder.
//  If we put <>, it looks in teh standard folder.
// Ideally in header file, there should be only declarations.
// header.cpp file should has its definition.
// This is done for better organization of code and reduces likelihood of errors.


# include <bits/stdc++.h>
# include "header.h"
using namespace std;

int main() {
    int result = add(3, 5);
    cout << "Result: " << result << endl;
    return 0;
}
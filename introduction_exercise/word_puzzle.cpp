// word puzzle 
// Finding the word which can be loacted horizontally, vertically or diagonally.

// vector<vector<int>>mover  -- vector intialization
// string r = s.substr(position, length_of_substring)

#include <bits/stdc++.h>
using namespace std;

int x[] = {0, 0, 1, -1, -1, 1, -1, 1};
int y[] = {1, -1, 0, 0, 1, -1, -1, 1};

bool checking(char *grid, int row, int col, string tocheck, int R, int C){
    int tocheck_len = tocheck.length();
    vector<int>ans;
    if (*(grid+row*C+col)!=tocheck[0]){
        return false;
    }
    
    for(int dir=0; dir<8; dir++){
        int row_dir = row+x[dir];
        int col_dir = col+y[dir];
        int k;
        
        for(k=1; k<tocheck_len; k++){
            
            if(row_dir<0 || row_dir>R || col_dir<0 || col_dir>C) break;
            
            if(*(grid+row_dir*C+col_dir)!=tocheck[k]) break;
            
            row_dir += x[dir];
            col_dir += y[dir];
        }
        if(k==tocheck_len){
            cout<<"The first letter found at {"<<row<<","<<col<<"}"<<endl;
            cout<<"The last letter found at {"<<row_dir<<","<<col_dir<<"}"<<endl;
            return true;
        }
    }
    return false;
}


int main() {
    
    int m = 4;
    int n = 4;
    char grid[m][n] = {{'t', 'e', 'a', 'l'},{'h', 'h', 'j', 'k'},{'a', 'g', 'i', 'm'},{'t', 'e', 'u', 's'}};
    
    string tocheck = "that";
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(checking(*grid, i, j, tocheck, m, n)){
                cout<<"Word found successfully";
                return 0;
            }
        }
    }
    cout<<"Word is not available in the grid";
}
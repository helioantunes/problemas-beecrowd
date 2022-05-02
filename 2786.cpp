#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, C; 

    cin >> L >> C; 

    int result1 = L * C + (L - 1) * (C - 1);
    int result2 = 2 * (C - 1) + 2 * (L - 1);
    
    cout << result1 << endl; 
    cout << result2 << endl;
   
    return 0;
}
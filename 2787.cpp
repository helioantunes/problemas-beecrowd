#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, C; 

    cin >> L >> C; 
    
    int soma = L + C;

    if(soma % 2 == 0){
        cout << 1 << endl;
    }
    else if(soma % 2 != 0){
        cout << 0 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N, M, X;
    
    cin >> N >> M;
    vector<int> array(N + 1, 0);
    for(int i = 0; i < M; i++){
        cin >> X;
        array[X] += 1;
    }
    
    int L = N;
    for(int i = 1;i <= N; i++){
        if(array[i] > 0){
            L--;
        }
    }
    cout << L << endl;
    
    return 0;
}
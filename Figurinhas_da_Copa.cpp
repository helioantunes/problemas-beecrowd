#include <bits/stdc++.h>
using namespace std;

int main(){
    int F, N, M, C, J; 
    int vetor[50];

    cin >> N >> C >> M;
 
    for(int i = 0;i < C; i++){
        cin >> vetor[i];  
    }

    J = C;

    for(int k = 0; k < M; k++){
        cin >> F;
        for(int i = 0; i < C; i++){
            if(F == vetor[i]){
                vetor[i] = 0;
                J = J - 1;
            }
        }
    }
    cout << J << endl;
}
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int n, m;
    char A[110][100];
    cin>>n>>m;
    for(int i = 0; i < n; i++) {
        cin>>A[i];
    }
    // probar filas
    for(int i = 0; i < n; i++) {
        cin>>A[i];
    }
    // end probar filas
    //111
    //222
    //233
    // cout<<n * m<<endl;
    cout<<A[1]<<endl;
	return 0;
}
int probarFile(int k, int m, char A[110][110]) {
    for(int i = 0; i < m - 1; i++) {
      if(A[k][i] != A[k][i + 1])
        return 1;
    }
    return 0;
}
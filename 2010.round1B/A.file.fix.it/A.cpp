#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("A.t.in", "r", stdin);
    freopen("A.t.out", "w", stdout);

    int TC,N,M;
    int tc,i,ans;
    
    scanf("%d", &TC);

    for(tc=1;tc<=TC;tc++) {
        scanf("%d %d", &N, &M);
        printf("Case #%d: %d\n", tc, ans);
    }
    return 0;
}
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("A-large-practice.in", "r", stdin);
    freopen("A.large.out", "w", stdout);

    int TC,N;
    int tc,i,j,ans;
    int wires[1000][2];
    scanf("%d", &TC);

    for(tc=1;tc<=TC;tc++) {
        ans = 0;
        scanf("%d", &N);
        for(i=0;i<N;i++){
            scanf("%d %d", &wires[i][0], &wires[i][1]);
        }
        for(i=0;i<N;i++){  
            for(j=0;j<N;j++){
                if( (wires[i][0] - wires[j][0]) * (wires[i][1] - wires[j][1]) < 0)
                    ans++;
            }
        }
        printf("Case #%d: %d\n", tc, ans / 2);
    }
    return 0;
}
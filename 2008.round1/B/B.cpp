#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("B.test.in", "r", stdin);
    freopen("B.test.out", "w", stdout);

    int TC,N,M,T,p;
    int tc,i,j,ans;
    int type, mal;
    bool possible, sas;

    scanf("%d", &TC);

    int malted[2000];

    for(tc=1;tc<=TC;tc++) {
        memset(malted, 0, 2000);
        possible = true;
        scanf("%d", &N);
        scanf("%d", &M);
        for (int i = 0; i < M; ++i) {
            scanf("%d", &p);
            for (int j=1; j <= p; ++j)
            {
                sas = false;
                scanf("%d %d", &type, &mal);
                if(mal == 1 && malted[type] == 0) {
                    possible = false;
                    goto impossible;
                }
                else if (mal == 1) {
                    malted[mal] = 1;
                    break;
                }
            }
            if(!possible) break;
        }
        if(possible) {
            printf("Case #%d:", tc);
            for(i=1;i<=N;i++) printf(" %d", malted[i]);
            printf("\n");
        }
        else {
            impossible:
            printf("Case #%d: IMPOSSIBLE\n", tc);
        }   
    }
    return 0;
}
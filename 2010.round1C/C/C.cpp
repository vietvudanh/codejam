#include<cstdlib>
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("C.t.in", "r", stdin);
    freopen("C.t.out", "w", stdout);

    int TC,M,N,tmp_int;
    int tc,i,j,k,row_idx;
    int num;
    int board[512][512], dp[512][512];
    char buffer[128], tmp_char;
    
    scanf("%d", &TC);

    for(tc=1;tc<=TC;tc++) {
        scanf("%d %d", &M, &N);
        for(i=0;i<M;i++){
            row_idx=0;
            scanf("%s", buffer);
            for(j=0;j<N/4;j++){
                tmp_int = buffer[j] - '0' > 0 ? buffer[j] - '0' : buffer[j] - 'A' + 10;
                
                for(k=3;k>=0 && tmp_int > 0;k--){
                    num = int(pow(2,k));
                    board[i][row_idx] = tmp_int / num > 0 ? 1 : 0;
                    if(tmp_int >= num) tmp_int -= num;
                    row_idx++;
                }
            }
        }
        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }

        printf("Case #%d:\n", tc);
    }
    return 0;
}
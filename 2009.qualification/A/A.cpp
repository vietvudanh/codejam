#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    int L, D, N;
    freopen("A-large-practice.in", "r", stdin);
    freopen("A.output", "w", stdout);
    
    scanf("%d%d%d", &L, &D, &N);

    char data[6000][32];
    char buffer[1000];
    bool pos[26][26];

    int i, j, tc, at;
    for (i = 0; i < D; ++i) {
        scanf("%s", data[i]);
    }
    for (tc = 1; tc <= N; ++tc)
    {
        scanf("%s", buffer);
        
        memset(pos, false, sizeof(pos));
        at = 0;
        for (i = 0; i < L; i++)
        {
            if (buffer[at] == '(') {
                at++;
                for (j = 0; buffer[at] != ')'; j++)
                {
                    pos[i][buffer[at]-'a'] = true;
                    at++;
                }
                at++;
            }
            else 
                pos[i][buffer[at++] - 'a'] = true;
        }
        int cnt = 0;
        for (i =0; i < D; i++) {
            bool ok = true;
            for(j=0; j <L; j++) {
                if(!pos[j][data[i][j] - 'a']) {
                    // printf("%s %d\n", data[i], j);
                    ok = false;
                    break;
                }
            }
            if (ok) cnt++;
        }
        printf("Case #%d: %d\n", tc, cnt);
    }
    return 0;
}
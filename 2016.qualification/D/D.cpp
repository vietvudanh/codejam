#include<cstdlib>
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

const char IMPOSSIBLE[] = "IMPOSSIBLE";

int main(int argc, char const *argv[]) {
    freopen("D.test.in", "r", stdin);
    freopen("D.test.out", "w", stdout);

    int TC;
    int K, C, S;
    int tc, n;
    bool check[10000];
    scanf("%d", &TC);

    for(tc =1; tc <= TC; tc++){
        scanf("%d %d %d", &K, &C, &S);
        for(n=0;n<pow(2,K);n++){
            
        }
        printf("Case #%d: ", tc);
    }
    return 0;
}
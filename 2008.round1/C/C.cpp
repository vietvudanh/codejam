#include<cstdlib>
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("C.t.in", "r", stdin);
    freopen("C.t.out", "w", stdout);

    int TC,N;
    int tc,i;
    long long ans;
    double origin = 3 + sqrt(5);

    scanf("%d", &TC);

    for(tc=1;tc<=TC;tc++) {
        scanf("%d", &N);
        ans = (long long)(pow(origin, N));
        printf("Case #%d: %lld\n", tc, ans % 1000);
    }
    return 0;
}
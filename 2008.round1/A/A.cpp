#include<cstdlib>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(int argc, char const *argv[]) {
    freopen("A-large-practice.in", "r", stdin);
    freopen("A.test.out", "w", stdout);

    int TC, N;
    int tc,i,j;
    long long prod;
    long long tmp;
    long long vec1[1000], vec2[1000];

    scanf("%d", &TC);
    for(tc=1;tc<=TC;tc++) {
        cin >> N;

        for(i=0;i<N;i++) {
            cin >> tmp;
            vec1[i] = tmp;
        }
        for(i=0;i<N;i++) {
            cin >> tmp;
            vec2[i] = tmp;
        }
        sort(vec1,vec1+N);
        sort(vec2,vec2+N,greater<int>());
        prod = 0;
        for(i=0;i<N;i++) prod += vec1[i] * vec2[i];
        cout << "Case #" << tc << ": " << prod << endl;
    }

    return 0;
}
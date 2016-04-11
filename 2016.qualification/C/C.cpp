#include<cstdlib>
#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

char buff[20];
int i, j;

void toDigit(int n, int b) {
    i = 0;
    while(n > 0) {
        buff[i++] =  n % b + '0';
        n /= b;
    }
    buff[i+1] = '\0';
    reverse(buff, buff + strlen(buff));
}

int fromDigit(char digit[], int b) {
    int n = 0;
    for(i=0;i<strlen(digit);i++){
        n = b * n + digit[i];
    }
    return n;
}

bool check_prime(int n) {
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 or n < 2) return false;
    for(i=3;i<int(sqrt(n));i++) if(n%i==0) return false;
    return true;
}

int main(int argc, char const *argv[]) {
    freopen("C.test.in", "r", stdin);
    freopen("C.test.out", "w", stdout);

    int TC, N, J, start, count;
    char digit[20];
    int value[11];
    string a;

    scanf("%d", &TC);
    scanf("%d %d", &N, &J);

    start = pow(2,N-1);

    printf("Case #1:\n");
    count = 0;
    while(count < J) {
        printf("%d\n", start);
        a = to_string(start);
        strncpy(digit, a.c_str(), a.size());
        int n;
        bool ok = true;
        for(i=2;i<=10;i++){
            n = fromDigit(digit, i);
            value[i]=n;
            if(check_prime(n)) ok = false;
        }
        if (ok) {
            printf("%s ", digit);
            for(i=2;i<=10;i++){
                int m = value[i];
                for(j=2;j<m;j++) if(m % j == 0) printf("%d ", j);    
            }
            printf("\n");
            count++;
        }
        start++;
    }

    return 0;
}
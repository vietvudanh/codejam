#include <cstdio>
#include <cstdlib>
#include <memory.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846264338327950288
int T, N;
char str[50][5050];
int out(int x) {
   printf("%d", x / 100);
   printf("%d", x / 10 % 10);
   printf("%d\n", x % 10);
   return 0;
}
int main() {
   int i, j, Case = 1;
   FILE *fin = fopen("C.t.in", "r");
   for (i = 2; i <= 30; i ++)
      fscanf(fin, "%s", &str[i]);
   scanf("%d", &T);
   while (T --) {
      scanf("%d", &N);
      printf("Case #%d: ", Case ++);
      j = strlen(str[N]);
      for (i = 0; i < j; i ++)
	 if (str[N][i] == '.')
	    break;
      j = 0;
      if (i >= 1)
      j += (str[N][i - 1] - '0');
      if (i >= 2)
      j += (int)(str[N][i - 2] - '0') * 10;
      if (i >= 3)
      j += (int)(str[N][i - 3] - '0') * 100;
      out(j);
   }
   return 0;
}


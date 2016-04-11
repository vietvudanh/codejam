#include<cstdlib>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int apply_up(int att[], char basin[], int row, int col, int H, int W) {
    // 2.2.1
    // check up stream
    int min = 
}

void apply(int att[], char basin[], int row, int col, int H, int W) {
    // 2. spread its label if
    // 2.1 sink; to the next which has


    // 2.2 next, flow down
    int min, i=-1, j=-1;
    if (0 < row < H) {
        max = att[row-1][col];
        i = row-1;
        j = col;
    }
    if (0 < col < W) {
        if (max < att[row][col-1]){
            max = att[row][col-1];
            i = row;
            j = col-1;
        }
    }
    if (0 <= col < W -1) {
        max = att[row][col+1];
        i = row;
        j = col+1;
    }
    if (0 < col < H-1) {
        max = att[row+1][col];
        i = row+1;
        j = col;
    }
    if( 0<= i < H && 0<=j<W && !basin[i][j]) {
        basin[i][j] = basin[row][col];
        apply(att, basin, i, j, H, W);
    }
}

int main(int argc, char const *argv[]) {
    freopen("B.input.test", "r", stdin);
    freopen("B.output", "w", stdout);

    int N;
    int map, H, W, row, col;
    int att[100][100];
    char basin[100][100];

    scanf("%d", &N);
    
    for(map=0;map<N;map++){
        memset(att,-1,sizeof(att));
        memset(basin,-1,sizeof(basin));
        scanf("%d %d", &H, &W);
        for(row=0; row<H; row++) {
            for(col=0; col<W; col++) {
                scanf("%d", &att[row][col]);
                printf("%d ", att[row][col]);
            }
            printf("\n");
        }
        // 1. start with top, label 'a'
        basin[0][0] = 'a';
        for(row=0; row<H; row++) {
            for(col=0; col<W; col++) {
                apply(att, basin, row, col, H, W);
            }
        }
    }

    return 0;
}
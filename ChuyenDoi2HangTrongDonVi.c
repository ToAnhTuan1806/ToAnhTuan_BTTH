#include <stdio.h>

void nhapMaTran(int maTran[50][50], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            scanf("%d", &maTran[i][j]);
        }
    }
}

void doiHang(int maTran[50][50], int cot, int hang1, int hang2) {
    for (int j = 0; j < cot; j++) {
        int tam = maTran[hang1][j];
        maTran[hang1][j] = maTran[hang2][j];
        maTran[hang2][j] = tam;
    }
}

void inMaTran(int maTran[50][50], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d", maTran[i][j]);
            if (j < cot - 1) printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int hang, cot, hang1, hang2;
    int maTran[50][50];

    scanf("%d %d", &hang, &cot);
    nhapMaTran(maTran, hang, cot);

    scanf("%d %d", &hang1, &hang2);
    doiHang(maTran, cot, hang1 - 1, hang2 - 1);

    inMaTran(maTran, hang, cot);
    return 0;
}


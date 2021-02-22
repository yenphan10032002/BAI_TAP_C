#include <iostream>

using namespace std;

struct matrix{
    int a[100][100];
    int n, m;
void nhapmatran(){
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            }
        }
    }
void chuyenvi(){
    if (m == n){
        printf("Ma tran chuyen vi:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        printf("%d ", a[j][i]);
        }
        printf("\n");
}
    } else {
    printf("Ma tran tren khong the chuyen vi.");
    }

}
};
int main()
{
    matrix A;
    A.nhapmatran();
    A.chuyenvi();
    return 0;
}

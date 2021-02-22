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
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &a[i][j]);
    }
}
}
};

void congmatran(matrix A, matrix B){
if (A.n == B.n && A.m == B.m){
        printf("Ket qua cong hai ma tran la: \n");
for (int i = 0; i < A.n; i++){
    for (int j = 0; j < A.m; j++){
        printf("%d ", A.a[i][j] + B.a[i][j]);
    }
    printf("\n");
}
} else {
printf("\nKhong the cong hai ma tran tren");
}
}

void trumatran(matrix A, matrix B){
if (A.n == B.n && A.m == B.m){
    printf("Ket qua tru hai ma tran la: \n");
for (int i = 0; i < A.n; i++){
    for (int j = 0; j < A.m; j++){
        printf("%d ", A.a[i][j] - B.a[i][j]);
    }
    printf("\n");
}
} else {
printf("\nKhong the tru hai ma tran tren");
}
}

void nhanmatran(matrix A, matrix B){
    matrix C;
if (A.m == B.n ){
    printf("Ket qua nhan hai ma tran la: \n");
for (int i = 0; i < A.n; i++){
    for (int j = 0; j < B.m; j++){
        for (int k = 0; k < A.m; k++){
            C.a[i][j] += A.a[i][k] * B.a[k][j];
        }
        printf("%d ", C.a[i][j]);
    }
    printf("\n");
}
} else {
printf("\nKhong the nhan hai ma tran tren");
}
}

int main()
{
    matrix A, B;
    A.nhapmatran();
    B.nhapmatran();
    congmatran(A, B);
    trumatran(A, B);
    nhanmatran(A, B);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char a[100];
    int n;
    int sum = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
    sum += a[i];
    }
    printf("Tong cac phan tu: %d\nGia tri trung binh: %f", sum, (double)sum/n);
    return 0;
}

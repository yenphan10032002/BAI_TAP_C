#include <iostream>

using namespace std;
void bubblesort(int a[], int n){
for (int i = 0; i < n; i++){
    for (int j = n - 1; j > i; j--){
        if (a[j] < a[j-1]){
            swap(a[j], a[j-1]);
        }
    }
}
}
int main()
{
    int n;
    int a[100];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

#include <iostream>

using namespace std;
void selectionsort(int a[], int n){
for (int i = 0; i < n; i++){
    for (int j = i; j < n; j++){
        if (a[i] < a[j]){
            swap(a[i], a[j]);
        }
    }
}
}
int main()
{
    int n;
    int a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    selectionsort(a, n);
    printf("Xep day so giam dan : ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

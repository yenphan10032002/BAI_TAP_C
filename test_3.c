#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, n;
    printf("Nhap vao so tien: ");
    scanf("%d", &n);
    a = n /10;
    b = (n - 10*a)/5;
    c = (n - 10*a - 5*b)/2;
    d = n - 10*a - 5*b - 2*c;
    printf("So dong nho nhat can dung la: %d\n", a+b+c+d);
    printf("Trong do:\n So dong 10 nghin can dung la: %d\n So dong 5 nghin can dung la: %d\n So dong 2 nghin can dung la: %d\n So dong 1 nghin can dung la: %d", a, b, c, d);
    return 0;
}

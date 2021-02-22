#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, denta, x1, x2, x12, A, B;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);
    denta = b*b - 4*a*c;
    if ( denta > 0){
            x1 = (-b + sqrt(denta))/(2*a);
            x2 = (-b - sqrt(denta))/(2*a);
        printf("He co hai nghiem thuc phan biet.\n Nghiem x1 la: %f\n Nghiem x2 la: %f", x1, x2);
    }
    if (denta == 0){
       x12 = -b/(2*a);
       printf("He co nghiem kep x12: %f", x12);
    }
    if (denta < 0){
        A = -b/(2*a);
        B = sqrt(-denta)/(2*a);
        printf("He co hai nghiem phuc.\n Nghiem x1 la: %f + %fi.\n Nghiem x2 la: %f - %fi.", A, B, A, B);
    }
    return 0;
}

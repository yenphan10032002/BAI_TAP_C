#include <iostream>

using namespace std;

struct sophuc{
int a;
int b;
void Nhapsophuc(){
printf("Nhap phan thuc cua so phuc : ");
scanf("%d", &a);
printf("Nhap phan ao cua so phuc : ");
scanf("%d", &b);
}
};

int main()
{
    sophuc s1, s2;
    s1.Nhapsophuc();
    s2.Nhapsophuc();
    printf("Tong hai so phuc: %d + %di\n", s1.a + s2.a, s1.b + s2.b);
    printf("Hieu hai so phuc: %d + %di\n", s1.a - s2.a, s1.b - s2.b);
    printf("Tich hai so phuc: %d + %di", s1.a*s2.a - s1.b*s2.b, s2.a*s1.b + s1.a*s2.b);
    return 0;
}

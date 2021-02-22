#include <iostream>

using namespace std;
int giaithua(int n){
if (n == 1) return 1;
return n*giaithua(n-1);
}

int mu(int m, int n){
if(n == 0) return 1;
return m*mu(m, n-1);
}

double maclaurin(int m, int n){
if (n == 0) return 1;
return  double(mu(m, n))/(giaithua(n)) + maclaurin(m, n-1);
}


int main()
{
    int m, n;
    printf("Gia tri gan dung cua e mu ");
    scanf("%d", &m);
    printf("Khai trien maclaurin toi bac n = ");
    scanf("%d", &n);
    printf("Khai trien bac %d cua e mu %d la: %f", n, m, (double)maclaurin(m, n));
    return 0;
}

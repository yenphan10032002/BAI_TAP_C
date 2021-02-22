#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    int a[100];
    int dem = 1;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < 100; i++){
        a[i] = 1;
    }
    for (int i = 0; i < strlen(s)-1; i++){
        for (int j = i+1; j < strlen(s)-1; j++){
           if (s[i] == s[j] && s[i] != ' '){
            a[i]++;
            s[j] = 8;
            }
            }
            if(s[i] != ' ' && s[i] != 8){
               printf("%c xuat hien %d lan trong chuoi\n", s[i], a[i]);
            }
            if (s[i] == ' ') {
           dem++;
            }
    }
    printf("So tu trong chuoi la: %d\n", dem);
    return 0;
}

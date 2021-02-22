#include<bits/stdc++.h>
/* */
void mahoa(char s[], int k){
for (int i = 0; i < strlen(s)-1; i++){
        if (s[i] >= 97 && s[i] <= 122){
            s[i] += k;
            if(s[i] > 122){
                s[i] = s[i] - 26;
            }
        }
        if (s[i] >= 65 && s[i] <= 90){
            s[i] += k;
            if (s[i] > 90){
                s[i] = s[i] - 26;
            }
        }
    }
}

void giaima(char s[], int k){
for (int i = 0; i < strlen(s)-1; i++){
    if (s[i] >= 97 && s[i] <= 122){
            s[i] -= k;
            if(s[i] < 97){
                s[i] = s[i] + 26;
            }
        }
        if (s[i] >= 65 && s[i] <= 90){
            s[i] -= k;
            if (s[i] < 65){
                s[i] = s[i] + 26;
            }
        }
    }
}

int main()
{
    char s[100];
    int k;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap so: ");
    scanf("%d", &k);
    mahoa(s,k);
    printf("Chuoi da ma hoa la: %s", s);
    giaima(s, k);
    giaima(s, k);
    printf("Chuoi da giai ma la: %s", s);
    return 0;
}

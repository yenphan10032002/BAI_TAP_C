#include <iostream>

using namespace std;

int main()
{
    int maxx=-9999999;
     int minn=9999999;
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=1;i<n;i++)
    {
        maxx=max(a[i],maxx);

        minn=min(a[i],minn);
    }
        cout<<"Gia tri lon nhat la: "<<maxx<<endl;
        cout<<"Gia tri be nhat la: "<<minn;
    return 0;
}


#include <stdio.h>
int a[300005];
int left, right;
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        left = -1, right = n;
        scanf("%d", &n);
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for(int j = 0; j < n; j++)
        {
            if(j > a[j])
                break;
            left = j;
        }
        for(int j = n - 1; j >= 0; j--)
        {
            if(n - j - 1 > a[j])
                break;
            right = j;
        }
        if(left >= right)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

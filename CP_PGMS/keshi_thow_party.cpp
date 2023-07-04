#include <iostream>

#include <cstdio>

#include <algorithm>

using namespace std;

const int maxn = 2e5 + 10;

int tp = 0;

int st[maxn];

int a[maxn], b[maxn];

int n;


bool query(int x)

{

    int tp = 0;

    for(int i=0; i<n; i++)

    {

        int l = x - 1 - a[i];

        int r = b[i];

        if(tp >= l && tp <= r)

            tp++;

    }

    return tp >= x;

}


int solve(int l, int r)

{

    while(l < r)

    {

        int mid = l + r >> 1;

        if(query(mid))

            l = mid + 1;

        else

            r = mid;

    }

    return query(l) ? l : l - 1;

}


int main()

{

    int t;

    scanf("%d", &t);

    while(t--)

    {

        scanf("%d", &n);

        tp = 0;

        for(int i=0; i<n; i++)

            scanf("%d%d", &a[i], &b[i]);

        int ans = solve(1, n);

        printf("%d\n", ans);

    }

    return 0;

}

#include<cstdio>
struct type{
    int x;
    int v;
}p[60000+5];
int n;
bool check(double time)
{
    
    double l=p[1].x-time*p[1].v;
    double r=p[1].x+time*p[1].v;
    for(int i=2;i<=n;i++){
        if(p[i].x-time*p[i].v > l) l=p[i].x-time*p[i].v;
        if(p[i].x+time*p[i].v < r) r=p[i].x+time*p[i].v;
        if(l>r) return false;
    }
    return true;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&p[i].x);
    for(int i=1;i<=n;i++) scanf("%d",&p[i].v);
    double st=0,ed=1000000000;
    while(ed-st>1e-7){
        double mid=st+(ed-st)/2;
        if(check(mid)) ed=mid;
        else st=mid;
    }
    printf("%.12lf\n",ed);
}

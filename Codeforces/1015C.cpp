#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double PI=acos(-1.0);
const double eps=1e-6;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    ll sum=0;
    vector<ll> dis(n);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        dis[i]=a[i]-b[i];
    }
    sort(dis.begin(),dis.end());
    int res=0;
    for(int i=dis.size()-1;i>=0;i--)
    {
        if(sum<=m)
        {
            printf("%d\n",res);
            return 0;
        }
        else
        {
            sum=sum-dis[i];
            res=res+1;
        }
    }
    if(sum<=m)
    {
        printf("%d\n",res);
        return 0;
    }
    printf("-1\n");
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
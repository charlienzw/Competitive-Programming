#include <bits/stdc++.h>
using namespace std;

vector<int> C;
int tot;
vector<vector<int> > vis(3);

void nqueens(int n,int cur)
{
    if(cur==n)
    {
        tot++;
        for(int j=0;j<C.size();j++)
        {
            printf("%d ",C[j]);
        }
        printf("\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+n])
            {
                C[cur]=i;
                vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=1;
                nqueens(n,cur+1);
                vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=0;
            }
        }
    }
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {

        tot=0;
        for(int i=0;i<vis.size();i++)
        {
            vis[i].resize(n*2,0);
        }
        C.resize(n);
        nqueens(n,0);
        printf("%d\n",tot);
    }
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}

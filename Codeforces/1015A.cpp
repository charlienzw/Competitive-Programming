#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double PI=acos(-1.0);
const double eps=1e-6;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m;
    scanf("%d %d",&n,&m);
    vector< vector<int> > A(n);
    vector<int> B;
    for(int i=0;i<n;i++)
    {
        A[i].resize(2);
        scanf("%d",&A[i][0]);
        scanf("%d",&A[i][1]);
    }
    int flag=1;
    for(int i=1;i<=m;i++)
    {
        flag=1;
        for(int j=0;j<n;j++)
        {
            if(i<=A[j][1]&&i>=A[j][0])
            {
                flag=0;
                break;
            }
        }
        if(flag==1) B.push_back(i);
    }
    printf("%d\n",B.size());
    for(int i=0;i<B.size();i++)
        printf("%d ",B[i]);
    printf("\n");
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
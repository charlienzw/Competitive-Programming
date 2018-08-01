#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double PI=acos(-1.0);
const double eps=1e-6;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    scanf("%d",&n);
    string s;
    string t;
    cin>>s;
    cin>>t;
    vector<int> pos(n);
    vector<int> visited(n,0);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(t[j]==s[i]&&visited[j]==0)
            {
                flag=1;
                visited[j]=1;
                pos[i]=j;
                break;
            }
        }
        if(flag==0)
        {
            printf("-1\n");
            return 0;
        }
    }
    vector<int> res;
	int tmp;
	for (int i = 0; i < pos.size() - 1; i++)
	{
		for (int j = pos.size() - 1; j >= i + 1; j--)
		{
			if (pos[j] < pos[j - 1])
			{
				tmp = pos[j];
				pos[j] = pos[j - 1];
				pos[j - 1] = tmp;
				res.push_back(j-1);
			}
		}
	}
    printf("%d\n",res.size());
    for(int i=0;i<res.size();i++) printf("%d ",res[i]+1);
    printf("\n");
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
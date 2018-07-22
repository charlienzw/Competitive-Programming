#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int k,x,y;
    while(scanf("%d",&k)!=EOF)
    {
        vector<int> X;
        vector<int> Y;
        for(y=k+1;y<=2*k;y++)
        {
            if((y*k)%(y-k)==0)
            {
                x=(y*k)/(y-k);
                X.push_back(x);
                Y.push_back(y);
            }
        }
        printf("%d\n",X.size());
        for(int i=0;i<X.size();i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",k,X[i],Y[i]);
        }
    }
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}

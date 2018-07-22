#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int N;
    ll maxproduct,product;
    int num=1;
    while(scanf("%d",&N)!=EOF)
    {
        vector<int> S(N);
        for(int i=0;i<N;i++) scanf("%d",&S[i]);
        maxproduct=0;
        for(int i=0;i<N;i++)
        {
            product=1;
            for(int j=i;j<N;j++)
            {
                product=product*S[j];
                if(product>maxproduct)
                {
                    maxproduct=product;
                }
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",num,maxproduct);
        num++;
    }
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}

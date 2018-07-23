#include <bits/stdc++.h>
using namespace std;

void print_subset(vector<int> A,vector<int> pos,int cur)
{
    for(int i=0;i<cur;i++)
    {
        printf("%d ",A[pos[i]]);
    }
    printf("\n");
    int s=cur?pos[cur-1]+1:0;
    for(int i=s;i<A.size();i++)
    {
        pos[cur]=i;
        print_subset(A,pos,cur+1);
    }
}

void print_subset2(vector<int> A,vector<int> B,int cur)
{
    if(cur==A.size())
    {
        for(int i=0;i<cur;i++)
        {
            if(B[i]) printf("%d ",A[i]);
        }
        printf("\n");
        return;
    }
    B[cur]=1;
    print_subset2(A,B,cur+1);
    B[cur]=0;
    print_subset2(A,B,cur+1);
}

void print_subset3(vector<int> A,int s)
{
    for(int i=0;i<A.size();i++)
    {
        if(s&(1<<i)) printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        vector<int> A(n);
        vector<int> pos(n);
        vector<int> B(n,0);
        for(int i=0;i<A.size();i++)
        {
            scanf("%d",&A[i]);
            pos[i]=i;
        }
        printf("Method 1:\n");
        print_subset(A,pos,0);
        printf("Method 2:\n");
        print_subset2(A,B,0);
        printf("Method 3:\n");
        for(int i=0;i<(1<<n);i++)
            print_subset3(A,i);
    }
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag,turn=1,sumA,sumB;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        vector<int> Arr(n);
        for(int i=0;i<Arr.size();i++) scanf("%d",&Arr[i]);
        vector<int> T(n);
        printf("Game %d:\n",turn);
        while(1)
        {
            flag=0;
            for(int i=0;i<T.size();i++)
            {
                scanf("%d",&T[i]);
                if(T[i]!=0) flag=1;
            }
            if(flag==0)
            {
                turn=turn+1;
                break;
            }
            vector<int> A(10,0);
            vector<int> B1(10,0);
            vector<int> B2(10,0);
            for(int i=0;i<T.size();i++)
            {
                if(T[i]==Arr[i])
                {
                    A[T[i]]=A[T[i]]+1;
                }
                B1[Arr[i]]=B1[Arr[i]]+1;
                B2[T[i]]=B2[T[i]]+1;
            }
            sumA=0;
            sumB=0;
            for(int i=0;i<B1.size();i++)
            {
                if(B1[i]>B2[i])
                    B1[i]=B2[i];
                B1[i]=B1[i]-A[i];
                sumA=sumA+A[i];
                sumB=sumB+B1[i];
            }
            printf("    (%d,%d)\n",sumA,sumB);
        }
    }
    return 0;
}

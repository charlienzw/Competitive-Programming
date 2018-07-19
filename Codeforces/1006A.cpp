#include <bits/stdc++.h>
using namespace std;

void Mishka(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
            a[i]=a[i]-1;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    vector<int> a(n);
    for(int i=0;i<a.size();i++)
        scanf("%d",&a[i]);
    Mishka(a);
    for(int i=0;i<a.size();i++)
        printf("%d ",a[i]);
    return 0;
}
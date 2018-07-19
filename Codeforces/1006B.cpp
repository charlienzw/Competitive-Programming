#include <bits/stdc++.h>
using namespace std;


bool comp(const vector<int> &a,const vector<int> &b)
{
    return a[0]>b[0];
}

void Polycarp(vector<int> a,int k,int &p,vector<int> &d)
{
    vector< vector<int> > aplus(a.size());
    for(int i=0;i<aplus.size();i++)
    {
        aplus[i].resize(2);
        aplus[i][0]=a[i];
        aplus[i][1]=i;
    }
    sort(aplus.begin(),aplus.end(),comp);
    p=0;
    for(int i=0;i<k;i++)
    {
        p=p+aplus[i][0];
        aplus[i][1]=aplus[i][1]+1;
        d[i]=aplus[i][1];
    }
    sort(d.begin(),d.end());
    d[d.size()-1]=a.size();
    for(int i=d.size()-1;i>=1;i--)
    {
        d[i]=d[i]-d[i-1];
    }
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int> a(n);
    for(int i=0;i<a.size();i++)
        scanf("%d",&a[i]);
    vector<int> d(k);
    int p;
    Polycarp(a,k,p,d);
    printf("%d\n",p);
    for(int i=0;i<d.size();i++)
        printf("%d ",d[i]);
}
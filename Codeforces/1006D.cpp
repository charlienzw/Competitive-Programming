#include <bits/stdc++.h>
using namespace std;

int prepross(string a,string b,int i)
{
    int n=a.length();
    if(n%2==0)
    {
        if(b[i]==b[n-1-i])
        {
            if(a[i]==a[n-1-i]) return 0;
            else return 1;
        }
        else
        {
            if(a[i]==b[i]&&a[n-1-i]==b[n-1-i]) return 0;
            else if(a[i]==b[n-1-i]&&a[n-1-i]==b[i]) return 0;
            else if(a[i]==b[i]&&a[n-1-i]!=b[n-1-i]) return 1;
            else if(a[i]==b[n-1-i]&&a[n-1-i]!=b[i]) return 1;
            else if(a[i]!=b[i]&&a[n-1-i]==b[n-1-i]) return 1;
            else if(a[i]!=b[n-1-i]&&a[n-1-i]==b[i]) return 1;
            else return 2;
        }
    }
    else
    {
        if(i==(n-1)/2)
        {
            if(a[i]==b[i]) return 0;
            else return 1;
        }
        else
        {
            if(b[i]==b[n-1-i])
            {
                if(a[i]==a[n-1-i]) return 0;
                else return 1;
            }
            else
            {
                if(a[i]==b[i]&&a[n-1-i]==b[n-1-i]) return 0;
                else if(a[i]==b[n-1-i]&&a[n-1-i]==b[i]) return 0;
                else if(a[i]==b[i]&&a[n-1-i]!=b[n-1-i]) return 1;
                else if(a[i]==b[n-1-i]&&a[n-1-i]!=b[i]) return 1;
                else if(a[i]!=b[i]&&a[n-1-i]==b[n-1-i]) return 1;
                else if(a[i]!=b[n-1-i]&&a[n-1-i]==b[i]) return 1;
                else return 2;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    string a;
    string b;
    cin>>a;
    cin>>b;
    int s=0;
    for(int i=0;i<=(n-1)/2;i++)
    {
        s=s+prepross(a,b,i);
    }
    printf("%d",s);
    return 0;
}

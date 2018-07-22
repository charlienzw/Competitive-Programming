#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a,b,c,d,e,f,g,h,i,j;
    int x,y;
    int flag;
    int check=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        if(check==0)
        {
            check=1;
        }
        else
        {
            printf("\n");
        }
        flag=0;
        for(f=0;f<=9;f++)
        {
            for(g=0;g<=9;g++)
            {
                if(g!=f)
                {
                    for(h=0;h<=9;h++)
                    {
                        if(h!=g&&h!=f)
                        {
                            for(i=0;i<=9;i++)
                            {
                                if(i!=h&&i!=g&&i!=f)
                                {
                                    for(j=0;j<=9;j++)
                                    {
                                        if(j!=i&&j!=h&&j!=g&&j!=f)
                                        {
                                            y=f*10000+g*1000+h*100+i*10+j;
                                            x=y*n;
                                            if(x>99999)
                                            {
                                                break;
                                                break;
                                                break;
                                                break;
                                                break;
                                            }
                                            e=x%10;
                                            d=(x/10)%10;
                                            c=(x/100)%10;
                                            b=(x/1000)%10;
                                            a=(x/10000);
                                            if(e!=j&&e!=i&&e!=h&&e!=g&&e!=f&&d!=e&&d!=j&&d!=i&&d!=h&&d!=g&&d!=f&&c!=d&&c!=e&&c!=j&&c!=i&&c!=h&&c!=g&&c!=f&&b!=c&&b!=d&&b!=e&&b!=j&&b!=i&&b!=h&&b!=g&&b!=f&&a!=b&&a!=c&&a!=d&&a!=e&&a!=j&&a!=i&&a!=h&&a!=g&&a!=f)
                                            {
                                                flag=1;
                                                printf("%d%d%d%d%d / %d%d%d%d%d = %d\n",a,b,c,d,e,f,g,h,i,j,n);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag==0)
            printf("There are no solutions for %d.\n",n);
    }
    return 0;
}

//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

/// src: http://ishtiaqhimu.blogspot.com/2018/08/1043-triangle-partitioning.html

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)


int main()
{

    ll i,t,x;
    double m,n,k,f,R,r,ans,e,theta,y;
    scl(t);
    for(x=1; x<=t; x++)
    {
        cin>>m>>n>>k>>r;
        theta=r/(1+r);
        ans=m* sqrt(theta);
       //cout<<ans<<endl;
        printf("Case %lld: %.10lf\n",x,ans);
    }

    return 0;
}





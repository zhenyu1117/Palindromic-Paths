#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define ls nod<<1
#define rs (nod<<1)+1
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)


const double eps = 1e-8;
const int maxn = 1e6 + 10;
const ll MOD = 998244353;
const int mlog=20;

int sgn(double a) { return a < -eps ? -1 : a < eps ? 0 : 1; }

using namespace std;

int t,n,m,a[40][40],c[65][2];
int main(){
    cin >> t;
    while(t--){
        int ans=0;
        cin >> n >> m;
        memset(a,0,sizeof(a));
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;++i) 
            for(int j=1;j<=m;++j) 
                cin >> a[i][j],c[i+j][0]+=(a[i][j]==0),c[i+j][1]+=(a[i][j]==1);
        if((n+m)%2==1){
            for(int i=2;i<=(n+m+2)/2;++i){
                ans+=c[i][0]+c[i][1]+c[n+m+2-i][0]+c[n+m+2-i][1]-max(c[i][0]+c[n+m+2-i][0],c[i][1]+c[n+m+2-i][1]);
            }
        }
        else{
            for(int i=2;i<(n+m+2)/2;++i){
                ans+=c[i][0]+c[i][1]+c[n+m+2-i][0]+c[n+m+2-i][1]-max(c[i][0]+c[n+m+2-i][0],c[i][1]+c[n+m+2-i][1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

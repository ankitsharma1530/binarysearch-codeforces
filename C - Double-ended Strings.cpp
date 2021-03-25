#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long 
#define INF 1000000000;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int n=s1.length();
        int m = s2.length();
        int dp[21][21];
        for (int i = 0; i < n; ++i)
            dp[i][0] = 0;
    
        for (int i = 0; i < m; ++i)
            dp[0][i] = 0;
    
        int res = 0; // ans
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                
                else
                    dp[i][j] = 0;
    
                res = max (res, dp[i][j]); 
            }
        }
        // cout<<res<<endl;
        cout<<n+m-2*res<<endl;
    }
    
}

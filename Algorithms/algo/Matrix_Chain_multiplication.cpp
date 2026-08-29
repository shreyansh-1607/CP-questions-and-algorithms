#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define nl << "\n"
#define ft first
#define sd second
#define all(x)         (x).begin(),(x).end()
#define setp(x) cout<<fixed<<setprecision(x)
#define sz(x) (int)(x).size()
#define sp << " " <<
#define mod 1000000007
#define fo(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep1(i,a,b) for(i=a;i<=b;i++)
#define debug(n) cerr << #n << " : " << n << '\n';
#define debug2(n1,n2) cerr << #n1 << " : " << n1 << "  " << #n2 << " : " << n2 << '\n';
#define p18 1000000000000000000
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vector<int>>
#define ml map<ll,ll>
#define mi map<int,int>
#define mc map<char,ll>
#define ii pair<ll,ll>
 
ll minn(ll a, ll b){if(a<=b) return a; else return b;}
ll maxx(ll a, ll b){if(a>=b) return a; else return b;}
ll hcf(ll a, ll b){if(b==0) return a; else return hcf(b,a%b);}
ll lcm(ll a, ll b) {if (a==0 || b==0) {return 0;} return (a / hcf(a, b)) * b;}
ll modabs(ll k){if(k<=0) return -k; else return k;}
ll modadd(ll a, ll b, ll z){return (((a%z)+(b%z))%z);}
ll modsub(ll a, ll b, ll z){return (((a%z)+((-b)%z)+z)%z);}
ll modmul(ll a, ll b, ll z){return (((a%z)*(b%z))%z);}
ll modexp(ll a, ll b, ll z){ll ans=1; while(b>0){if(b&1) ans=modmul(ans,a,z); a=modmul(a,a,z); b>>=1;} return ans;}
ll modinv(ll a, ll z){return modexp(a,z-2,z);}
ll moddiv(ll a, ll b, ll z){return modmul(a,modinv(b,z),z);}
 
using namespace std;
 
vvl mulM(vvl& A, vvl& B)
{
   ll n= A.size();
   vvl C(n, vl (n, 0));
 
   for(ll i= 0; i<n; i++)
   {
      for(ll k=0; k<n; k++) 
      {
         for(ll j=0; j<n; j++)   C[i][j]= (C[i][j] + (A[i][k] * B[k][j]) % mod) % mod;
      }
   }
   return C;
}
 
vvl expM(vvl A, ll p)
{
   ll n= A.size();
   vvl res(n, vl (n, 0));
   for(ll i=0; i<n; i++) res[i][i]= 1;
 
   while(p>0)
   {
      if(p&1) res= mulM(res, A);
      A= mulM(A, A);
      p>>=1;
   }
   return res;
}
 
void solve()
{
   ll n,i;
   cin >> n;
   vvl fib= {{1,1}, {1,0}};
  
   vvl ans= expM(fib, n);
   cout << ans[0][1];
}
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   // int test;
   // cin>>test;
   // while (test--)
   solve();
}

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define nl << "\n"
#define mod 1000000007
#define fo(i,n) for(i=0;i<n;i++)
#define debug(n) cerr << #n << " : " << n << '\n';
#define debug2(n1,n2) cerr << #n1 << " : " << n1 << "  " << #n2 << " : " << n2 << '\n';
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>

using namespace std;

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

class SegmentTree
{
    vector<int> tree;

    public:
        SegmentTree(int n)
        {
            tree.resize(4*n+1);
        }

        void buildTree(int ind, int low, int high, vector<int>& arr)
        {
            if(low== high) 
            {
                tree[ind]= arr[low];
                return;
            }

            int mid= low+ (high-low)/2;
            buildTree(2*ind+1, low, mid, arr);
            buildTree(2*ind+2, mid+1, high, arr);

            tree[ind]= min(tree[2*ind+1], tree[2*ind+2]);
        }

        int query(int ind, int low, int high, int l, int r)
        {
            if(high < l || r < low)
            {
                return INT_MAX;
            }

            if(low >= l && high <= r)
            {
                return tree[ind];
            }

            int mid= low+ (high- low)/2;
            int left= query(2*ind+1, low, mid, l, r);
            int right= query(2*ind+2, mid+1, high, l, r);
            return min(left, right);
        }

        void update(int ind, int low, int high, int i, int val)
        {
            if(low== high)
            {
                tree[ind]= val;
                return;
            }

            int mid= low+ (high- low)/2;
            if(i<= mid) update(2*ind+1, low, mid, i, val);
            else update(2*ind+2, mid+1, high, i, val);

            tree[ind]= min(tree[2*ind+1], tree[2*ind+2]);
        }

};

void solve()
{
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

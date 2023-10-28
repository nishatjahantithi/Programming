#include <bits/stdc++.h>
using namespace std;
 
// Utilities
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define cube(a) ((a) * (a) * (a))
#define rev(x) reverse(all(x))
#define sum(x) accumulate(all(x), 0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
const double PI = acos(-1);
#define endl "\n"
#define sp " "
#define setprecision(x) cout << fixed << setprecision(x)
 
#define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void tithi(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


void solve(){
   int x, y;
    cin >> x >> y;
    if(x >= y)
        cout << "A" << endl;
    else
        cout << "B" << endl; 
    

}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}


/*#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, sub;
    cin >> n >> a >> b;
    sub = n - a;
    cout << sub << " " << sub - b << endl;
    
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int X;
    cin >> X;

    int firstDigit = abs(X);
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    if (firstDigit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s[0] - '0';
    if(n % 2 == 0)
    cout << "EVEN" << endl;
    else
    cout << "ODD" << endl;  
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    float n1, n2;
    cin >> n1 >> n2;
    if(n1 > 0 && n2 > 0)
    cout << "Q1" << endl;
    else if(n1 < 0 && n2 > 0)
    cout << "Q2" << endl;
    else if(n1 < 0 && n2 < 0)
    cout << "Q3" << endl;
    else if(n1 > 0 && n2 < 0)
    cout << "Q4" << endl;
    else if(n1 == 0 && n2 == 0)
    cout << "Origem" << endl;
    else if(n1 == 0 && n2 < 0 || n2 > 0)
    cout << "Eixo Y" << endl;
    else if( n1 < 0 || n1 > 0 && n2 == 0 )
    cout << "Eixo X" << endl;
    else
    cout << " " << endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, rmd, years, months, days;
    cin >> n;
    years = n / 365;
    rmd = n % 365;
    months = rmd / 30;
    days = rmd  % 30;
    cout << years << " years\n"  << months << " months\n" << days << " days" << endl;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, sub1, sub2;
    cin >> x >> y;
    sub1 = y- x;
    sub2 = x - y;
    if(x < y && sub1 <= 2)
    cout << "Yes" << endl;
    else if(x > y && sub2 <= 3)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
}*/
// Author: Nishat Jahan Tithi
// Date: 29/10/2023
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >>  x;
    if(x >= 0 && x <= 25)
    cout << "Interval [0,25]" << endl;
    else if(x > 25 && x <= 50)
    cout << "Interval (25,50]" << endl;
    else if (x > 50 && x <= 75)
    cout << "Interval (50,75]" << endl;
    else if(x > 75 && x <= 100)
    cout << "Interval (75,100]" << endl;
    else
    cout << "Out of Intervals" << endl;
}*/

// Author: Nishat Jahan Tithi
// Date: 29/10/2023
 
/*#include <bits/stdc++.h>
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
    int x, h;
    cin >> x >> h;
    if(x >= h)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/

// Author: Nishat Jahan Tithi
// Date: 30/10/2023
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    float n, y;
    cin >> n;
    int x = floor(n);
    y = n - x;
    if (x == n)
    cout << "int " << x << endl;
    else
    cout << "float " << x << " " << y << endl;  
}*/


// Author: Nishat Jahan Tithi
// Date: 31/10/2023
/*#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, low, high, mid;
    cin >> a >> b >> c;
    low = min ({a , b, c});
    high = max ({a, b, c});
    mid = a + b + c - low - high;

    cout << low << "\n" << mid << "\n" << high << "\n" << endl;
    cout << a << "\n" << b << "\n" << c << endl;
}
int main(){
    solve();
}*/

// Author: Nishat Jahan Tithi
// Date: 31/10/23
 
/*#include <bits/stdc++.h>
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
    int n, m, mul;
    cin >> n >> m;
    mul = n * m;
    cout << mul << endl;
    
}

int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/


// Author: Nishat Jahan Tithi
// Date: 31/10/23
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;
    if(s == '<'){
        if(a < b){
            cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
    }else if(s == '>'){
        if(a > b){
            cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
    }else if(s == '='){
        if(a == b){
            cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
    } 
}*/

// Author: Nishat Jahan Tithi
// Date: 31/10/23
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if(s == '+' && q == '='){
        if(a + b == c){
            cout << "Yes" << endl;
        }else{
            cout << a + b << endl;
        }
    }else if(s == '-' && q == '='){
        if( a - b == c){
            cout << "Yes" << endl;
        }else{
            cout << a - b << endl;
        }
    }else if(s == '*' && q == '='){
        if(a * b == c){
            cout << "Yes" << endl;
        }else{
            cout << a * b << endl;
        }
    }

}*/

// Author: Nishat Jahan Tithi
// Date: 31/10/23
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    double long a, b, c, d, r1, r2;
    cin >> a >> b >> c >> d;
    r1 = pow(a, b);
    r2 = pow(c, d);

    if(r1 > r2)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
}*/


// Author: Nishat Jahan Tithi
// Date: 01/11/23
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d, mul, ltd;
    cin >> a >> b >> c >> d;
    mul = a * b * c * d;
    ltd = mul % 100;
    cout << ltd << endl;
}*/

// Author: Nishat Jahan Tithi
// Date: 01/11/23
/*#include<bits/stdc++.h>
using namespace std;

int main(){
int start1, end1, start2, end2;
 
    cin >> start1 >> end1 >> start2 >> end2;

    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);

    if (intersectionStart <= intersectionEnd) {
        cout << intersectionStart << " " << intersectionEnd << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}*/


// Author: Nishat Jahan Tithi
// Date: 01/11/2023
 
/*#include <bits/stdc++.h>
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
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a + b;
    if(sum == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/


// Author: Nishat Jahan Tithi
// Date: 01/11/2023
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c)
    cout << "Yes" << endl;
    else 
    cout << "No" << endl;
}*/


// Author: Nishat Jahan Tithi
// Date: 01/11/2023
 
/*#include <bits/stdc++.h>
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
    int n, x, d, mul, div, result;
    cin >> n >> x >> d;
    mul = 5 * x;
    div = n / mul;
    result = div + d;
    cout << result << endl;
    
}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/

// Author: Nishat Jahan Tithi
// Date: 01/11/2023
 
/*#include <bits/stdc++.h>
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
    int n, sub, result;
    cin >> n;
    sub = n - 1;
    result = n * sub;
    if(n >= 2 && n <= 11)
    cout << result << endl;
}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/

// Author: Nishat Jahan Tithi
// Date: 02/11/2023
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    double x, p;
    cin >> x >> p;
    double pbd = p / ((100.0 - x) / 100.0);
    cout << fixed << setprecision(2) << pbd << endl;
}*/


// Author: Nishat Jahan Tithi
// Date:02/11/2023 
 
/*#include <bits/stdc++.h>
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
    int x;
    cin >> x;
    if(x == 6)
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;

}

int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/


// Author: Nishat Jahan Tithi
// Problem Link: 
 
/*#include <bits/stdc++.h>
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
    double x, y, div;
    cin >> x >> y;
    div = y / x;
    int n = floor(div);
    cout << n << endl;

}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}*/

// Author: Nishat Jahan Tithi
// Date:03/11/2023 
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k;
    if(a % k == 0 && b % k == 0)
    cout << "Both" << endl;
    else if (a % k == 0 && b % k != 0)
    cout << "Memo" << endl;
    else if(a % k != 0 && b % k == 0)
    cout << "Momo" << endl;
    else 
    cout << "No One" << endl;
}*/

// Author: Nishat Jahan Tithi
// Date:03/11/2023 
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    char currentChar, nextChar;
    cin >> currentChar;
    if (currentChar >= 'a' && currentChar <= 'z'){
    nextChar = (currentChar == 'z') ? 'a' : currentChar+ 1;
    cout << nextChar << endl;
    }else{
    cout << "Invalid Character" << endl;
    }
}*/


// Author: Nishat Jahan Tithi
// Date: 03/11/2023
 
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
    int n, x, y, mul;
    cin >> n >> x >> y;
    mul = x * y;
    if(n <= mul)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
}

 
int main() {
    Tithi
    int t = 1;
    cin >> t;
 
    while(t--) solve();
}












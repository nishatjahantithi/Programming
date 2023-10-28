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











#include <bits/stdc++.h>
#define ll long long
#define EL_MEXICY ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    EL_MEXICY
    string m, x;
    int n, y;
    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        cin >> x >> y;
        if (m.size() + n > x.size() + y) {
            cout << ">\n";
        } else if (m.size() + n < x.size() + y) {
            cout << "<\n";
        } else {
            while (m.size() < x.size() && n){
                m+='0';
                n--;
            }
            while(x.size() < m.size() && y){
                x+='0';
                y--;
            }
            if (x == m){
                cout <<"=\n";
            }
            else if (m > x) cout << ">\n";
            else cout << "<\n";
        }
    }
}


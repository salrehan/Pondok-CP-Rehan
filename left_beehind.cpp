#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef unsigned long long int ulli;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef string st;
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define pii pair<int, int>
#define psi pair<string, int>
#define F first
#define S second
#define p(a, b) pair<a, b>
#define vin vector<int>
#define v(a) vector<a>
//------------------------------------------------------------------------------------------------------------------
#define trace(x) cout<<"> "<<#x<<" : "<<x<<endl
#define trace2(x,y) cout<<"> "<<#x<<" : "<<x<<" | "<<#y<<" : "<<y<<endl
#define trace3(x,y,z) cout<<"> "<<#x<<" : "<<x<<" | "<<#y<<" : "<<y<<" | "<<#z<<" : "<<z<<endl
#define trace4(w,x,y,z) cout<<"> "<<#w<<" : "<<w<<" | "<<#x<<" : "<<x<<" | "<<#y<<" : "<<y<<" | "<<#z<<" : "<<z<<endl
// CONSTANT
#define mod     1000000007 // 1e9+7
#define mods    998244353  // Prime
#define eps     0.000000001 // 1e-9
#define inf     2147483647 // INT_MAX
#define INF     9223372036854775807 // LLONG_MAX
//-------------------------------------------------------------------------------------------------------------------
template<typename T>
void print(pair<T, T> var) { // print pair
        cout << var.first << ' ' << var.second << endl;
}

template<typename T>
void print(vector<T> var) { // print vector
        for(auto i : var) {
                cout << i << ' ';
        } cout << endl;
}

template<typename T>
void print(vector<pair<T, T>> var) { //print vector pair
        for(auto &i : var) {
                cout << i.first << ' ' << i.second << endl;
        }
}
//---------------------------------------------------------------------------------------------------------------------------

int main(){
fastIO
//int t; cin >> t;
//  while(t--){

//  }
ll x, y;
while(cin >> x >> y){
    if(x == 0 && y == 0) break;
    if(x+y == 13) cout << "Never speak again." << endl; 
    else if(x > y) cout << "To the convention." << endl;
    else if(x < y) cout << "Left beehind." << endl;
    else if(x == y) cout << "Undecided." << endl;
}
}
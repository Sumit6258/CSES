//
//  ❤️ Created by Sumit Suman on 19-10-2022. ❤️
//

#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
#define read(arr,n) for(int i = 0; i < n; i++)cin>>arr[i];
#define vi vector<ll int>
#define vc vector<char>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,a,b) for(ll i=a; i<b; i++)
ll mod = 1e9+7;
#define fi first
#define se second
//#define sumit @sumit6258
using namespace std;



void code() {
    ll n, temp = 0;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    rep(i,1,n){
        if(a[i] < a[i-1]){
            temp += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }

    cout << temp;
}


int main() {
    fast;
    code();
    return 0;
}
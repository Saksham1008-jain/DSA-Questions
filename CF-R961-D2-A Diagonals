#include<iostream>
#include<stdio.h>
#include<string>

#define int long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        if(k == 0){
            cout << 0 << endl;
            continue;
        }
        if(k <= n){
            cout << 1 << endl;
            continue;
        }
        k -= n;
        int cnt = 1 ;
        int x = n - 1 ;
        while(k > 0){
            k -= x;
            cnt++;
            if(k <= 0){
                break;
            }
            k -= x;
            cnt++;
            x--;
        }
        cout << cnt << endl;
    }
}

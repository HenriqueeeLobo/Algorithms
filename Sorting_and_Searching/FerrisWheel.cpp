#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n>> x;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(), v.end());

    int gondolas=0;
    int i=0,j=n-1;
    while(i<=j){
        if(v[j]+v[i]<=x){
            i++;
        }
        gondolas++;
        j--;
    }
    cout << gondolas;
}

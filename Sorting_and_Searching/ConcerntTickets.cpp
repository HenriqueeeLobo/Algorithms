#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n,m;
    cin >> n>>m;


    vector<int> tickets(n);
    vector<int> costumers(m);
    for(int i=0;i<n;i++) cin >> tickets[i];
    for(int i=0;i<m;i++) cin >> costumers[i];

    sort(tickets.begin(), tickets.end());
    int inicio=0;
    for(int i=0;i<m;i++){
        
    }


    return 0;
}

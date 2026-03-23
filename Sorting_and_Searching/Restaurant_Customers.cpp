#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    vector<int> arrivals(n);
    vector<int>  leaves(n);
    for(int i=0;i<n;i++) cin >> arrivals[i]>>leaves[i];
    sort(arrivals.begin(), arrivals.end());
    sort(leaves.begin(), leaves.end());

    int counter=0,count=0;
    int i=0; int j=0;
    while(i<n && j<n){
        if(arrivals[i]<=leaves[j]){
            i++;
            counter++;
            count = max(counter, count);
        }else{
            j++;
            counter--;
        }

    }

    cout << count;

    return 0;
}

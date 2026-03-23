#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n>>m>>k;

    vector<int> applicants(n);
    vector<int> apartments(m);
    for(int i=0;i<n;i++) cin >> applicants[i];
    for(int i=0;i<m;i++) cin >> apartments[i];
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(),apartments.end());

    int counter=0,i=0,j=0;
    while(i<n && j<m){
        if(applicants[i]-k<= apartments[j] && applicants[i]+k>= apartments[j]){
            counter++;
            i++;
            j++;
        }else if(applicants[i]+k<apartments[j]){
            i++;
        }else{
            j++;
        }
    }

    cout << counter;
    
    return 0;
}

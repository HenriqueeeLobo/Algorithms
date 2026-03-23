#include <bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<pair<int,int>> movies(n);
    for(int i=0;i<n;i++) cin >> movies[i].second >> movies[i].first;
    sort(movies.begin(), movies.end());

    int counter =1,last_movie_watched=0;

    for(int i=1;i<n;i++){
        if(movies[i].second >= movies[last_movie_watched].first){
            last_movie_watched=i;
            counter++;
        }
    }

    cout << counter;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map <int, int> shoes;
    int pair = 0;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        shoes[x]++;
    }

    for (auto &i : shoes){
        if(i.second > 1){
            pair += i.second-1;
        }
    }

    cout << pair;

    return 0;
}
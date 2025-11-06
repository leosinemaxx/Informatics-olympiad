#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int count = 0;
    cin>>n;
    for(int i = 0; i < n; i++){

    vector <int> user (3,0);
    for(int j = 0; j < 3; j++ ){  
    cin >> user[j];
    }

    int t = 0;
    for(int j = 0; j < 3; j++ ){  
    if(user[j] == 1) t++;
    }
    if(t>=2) count++;
}
    

    cout << count;
}
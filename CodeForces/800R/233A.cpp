#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n % 2 != 0){
        cout << -1;
        return 0;
    }

    vector <int> num (n);
    for(int i = 0; i < n; i++){
        num[i] = i+1;
    }

    for(int i = 0; i < n; i+=2){
        swap(num[i],num[i+1]);
    }

    for(auto i : num){
        cout << i << " ";
    }


    

    return 0;
}
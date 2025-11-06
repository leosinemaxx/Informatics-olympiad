#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    unordered_map <char, int> ct;

    for(auto ch : s){
        ct[ch]++;
    }

    if(ct.size() % 2 == 1){
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
    
}
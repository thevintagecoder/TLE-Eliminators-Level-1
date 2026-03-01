#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){
        int n,k;

        cin >> n >> k;
        string s;
        
        cin >> s;

        int output=1;

        for(int i=1; i <n ;i++){
            string member_votes;
            cin >> member_votes;

            if(s == member_votes){
                output++;
            }
        }

        cout << output << endl;
    }
}
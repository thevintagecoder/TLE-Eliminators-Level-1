#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    int n, x;
    string s;

    cin >> n; 

    while(n--){
        cin >> x; 
        cin >> s; 

        
        for (char &c : s) {
            c = tolower(c);
        }

        
        s.erase(unique(s.begin(), s.end()), s.end());

        
        if (s == "meow") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
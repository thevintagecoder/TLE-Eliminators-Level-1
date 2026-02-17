#include <iostream>

using namespace std;

int main() {
    
    long long n, m;
    
    
    if (!(cin >> n >> m)) return 0;

    
    long long lastN = n % 10;
    long long lastM = m % 10;

    
    cout << lastN + lastM << endl;

    return 0;
}
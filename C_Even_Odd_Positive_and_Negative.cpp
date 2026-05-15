#include <bits/stdc++.h>

using namespace std;

int main(){

int n, m,positive=0, negative=0, odd=0, even=0;

cin >> n;

for(int i=0; i <n; i++){
    cin >> m;

   if(m %2 ==0){
        even++;
   }
   else{
        odd++;
   }

   if(m >0){
    positive++;
   }else if(m < 0){
    negative++;
   }
   
}





cout << "Even: " << even<< endl;
cout << "Odd: " << odd<< endl;
cout << "Positive: " << positive<< endl;
cout << "Negative: " << negative<< endl;

}
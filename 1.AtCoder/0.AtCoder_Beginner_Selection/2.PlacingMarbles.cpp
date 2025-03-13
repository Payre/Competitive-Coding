// Snuke has a grid consisting of three squares numbered 1, 2 and 3. In each square, either 0 or 1 is written. The number written in Square i is si​.

// Snuke will place a marble on each square that says 1. Find the number of squares on which Snuke will place a marble.
// Constraints

// Each of s1​, s2​ and s3​ is either 1 or 0. 

#include <iostream>
using namespace std;

int main(){
    int s, si[2], c=0;
    cin >> s;
    int z = s;
    for(int i=2; i>=0; i--){
        si[i] = z % 10;
        z = z/10;
        if(si[i]==1){
            c++;
        }
    }
    cout << c;
    return 0;
}
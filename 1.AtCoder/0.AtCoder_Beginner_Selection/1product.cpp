#include<iostream>
using namespace std;
// ad
int main(){
    int a, b;
    cin >> a >> b;
    if((a*b)%2 == 0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 0;
}
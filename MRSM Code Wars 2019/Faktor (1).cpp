#include <iostream>
using namespace std;

int main() {
    int a,b=0;
    cin>>a;
    cin>>b;
    if (b%a == 0) {
        cout<<"ya";
    } else {
        cout<<"tidak";
    }
    return 0;
}
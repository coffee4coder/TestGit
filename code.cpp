#include<iostream>
using namespace std;

int main(){
    int a, b, div;

    cin >> a >> b;
    div = (a + b) / 2;

    if(div % 2 == 0){
        cout << "Eligible" << " ";
    }else{
        cout << "Non-Eligible" << " ";
    }

    // This is only for testing
    // This is the change (mark it)

    cout << "Output: "<< div << endl;
    return 0;
}

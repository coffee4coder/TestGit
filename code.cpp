#include<iostream>
using namespace std;

int main(){
    int a, b, div, i, num = 0;

    cin >> a >> b;
    div = (a + b) / 2;

    if(div % 2 == 0){
        cout << "Eligible" << " " << endl;
    }else{
        cout << "Non-Eligible" << " " << endl;
    }

    // This is only for testing
    // This is the change (mark it)

    for(i = 1; i <= 10; i++){
        num += i;
    }   

    cout << "Output: "<< div << " " << num << endl;
    return 0;
}

#include<iostream>
using namespace std;

int i = 0, k = 0, l = 0, z = 0;

int myFC1(int x){
    if(z%2 == 0 and z != 0){
        k += 1;
    }
    if(z%2 != 0 and z != 0){
        l += 1;
    }
    return 0;
}

int main(){

    cout << "Enter an integer: ";
    cin >> z;

    myFC1(z);

    while(z != 0){
        cout << "Enter an integer: ";
        cin >> z;
        myFC1(z);
        if(z == 0){
            break;
        }
    }

    cout << "#Even numbers = " << k << endl;
    cout << "#Odd numbers = " << l;
    return 0;
}


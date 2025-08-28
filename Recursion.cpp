#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int mult(int a, int b) {
    if (b == 0) return 0;
    return a + mult(a, b - 1);
}

string int2Bin(int num){

    if (num == 0){
        return "";
    }
    else {
        return int2Bin(num/2) +to_string(num%2) ;
    }
}


int main() {
    int num1, num2, total;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;

    total = mult(num1, num2);
    cout << "Mult: " << total << endl;
    cout << "bin" <<int2Bin(num1) <<endl;

    return 0;
}

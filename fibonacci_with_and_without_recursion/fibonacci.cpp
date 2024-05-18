#include <iostream>

using namespace std;

int add(int a, int b){
    int c = a + b;
    return(c);
}

int main(){
    int num1 = 0;
    int num2 = 1;
    cout << num1 << endl;
    cout << num2 << endl;
    for(int i = 2; i < 10; i++){
        int out = add(num1, num2);
        cout << out << endl;
        num1 = num2;
        num2 = out;
    }
}
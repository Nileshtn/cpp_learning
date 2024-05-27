#include <iostream>

using namespace std;

void fibonacci(int numb1, int numb2, int* count);

int main(){
    int fibcount = 2;
    int* fibcount_ptr = &fibcount;
    cout << 0 << endl << 1 <<endl;
    fibonacci(0, 1, fibcount_ptr);
    return 0;       
}


void fibonacci(int numb1, int numb2, int* count){
    if(*count < 10){
        int new_num = numb1 + numb2;
        cout << new_num << endl;
        numb1 = numb2;
        numb2 = new_num;
        (*count)++;
        fibonacci(numb1, numb2, count);
    }
}
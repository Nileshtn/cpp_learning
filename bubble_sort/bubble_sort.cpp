#include <iostream>

using namespace std;

void sort_arr(int arr[], int size);

int main(){
    int arr[] = {43,32,78,63,96,38,12,56,89};
    int arr_size = size(arr);
    sort_arr(arr, arr_size);
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}

void sort_arr(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

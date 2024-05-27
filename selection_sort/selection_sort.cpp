#include <iostream>

using namespace std;

void selection_sort(int arr[], int size);

int main(){
    int arr[]={6,5,10, 8, 1};
    int arr_size = size(arr);
    selection_sort(arr, arr_size);
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}

void selection_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min_index = i;
        for(int j=0; j<size-i; j++){
            if(arr[j+i] < arr[min_index]){
                min_index = j+i;
            }
        }
        int temp = arr[min_index];
        arr[min_index] =  arr[i];
        arr[i] = temp;
    }
}
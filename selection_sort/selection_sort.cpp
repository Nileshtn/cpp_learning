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
    int min_number {0};
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
            if(j == 0){
                min_number = arr[j+i];
                continue;
            }
            if(arr[j+i] < min_number){
                min_number = arr[j+i]; 
                arr[j+i] =  arr[i];
                arr[i] = min_number;
            }
        }
    }
}
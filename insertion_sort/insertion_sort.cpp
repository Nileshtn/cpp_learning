#include <iostream>

using namespace std;

void insertion_sort(int arr[], int size);

int main(){
    int arr[] = {43,32,78,63,96,38,12,56,89};
    int arr_size = size(arr);
    insertion_sort(arr, arr_size);
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}

void insertion_sort(int arr[], int size){
    for(int i=1; i<size; i++){
        int changed_index = i;
        for(int j=i-1; j>-1; j--){
            if(arr[changed_index]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[changed_index];
                arr[changed_index] = temp;
                changed_index = j;
            }
            else{
                break;
            }
        }
    }
}
#include <stdio.h>

void bubble_sort(int *input, int size){
    int temp;
    for (int last = size - 1; last >= 0; last--){
        for (int current = 0; current < last; current++){
            if (input[current] > input[current+1]) {
                temp = input[current];
                input[current] = input[current+1];
                input[current+1] = temp;
            }
        }
    }
}

int main(){
    int data[8] = {6, 5, 3, 1, 8, 7, 2, 4};
    bubble_sort(data, 8);
    for (int i = 0; i < 8; i++){
        printf("%d ", data[i]);
    }
    return 0;
}
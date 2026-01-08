#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5};
    int size=5;
    int pos=3;
    int value=18;

    for(int i=0; i<size ; i++){
            printf("%d", arr[i]);
    }

    for(int i=pos; i<size-1; i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("\n");
    for(int i=0; i<size; i++){
            printf("%d ", arr[i]);
    }


}
#include <stdio.h>
int main(){
    int size;
    printf("nter the size of the 1D array :");
    scanf("%d",&size);
    int arr[size];
    int max=0;
    for(int i=0;i<size;i++){
        printf("enter the element arr[%d] : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];

    }
    int min = arr[0];
    float sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]<min) min = arr[i];
        sum += arr[i];
    }
    float avg= sum/size;
    int num;
    printf("enter a number you want to linear search :");
    scanf("%d",&num);
    int idx;
    for(int i=0;i<size;i++){
        if(arr[i] == num) idx = i;
        break;
    }

}
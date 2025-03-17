// Problem Statement

// There are N positive integers written on a blackboard: A1​, ..., AN​.

// Snuke can perform the following operation when all integers on the blackboard are even:

// Replace each integer X on the blackboard by X divided by 2.

// Find the maximum possible number of operations that Snuke can perform.
// Constraints

// 1 ≤ N ≤ 200
// 1 ≤ Ai ​≤ 109

#define N 200

#include <stdio.h>
int oddCheck(int *a, int size);
void arrd2(int *ar2, int size);

int main(){
    int arr[N], i, size, count;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    count = 0;
    while(1){
        if(!oddCheck(arr, size)){
            count++;
        }
        else {
            printf("%d", count);
            break;
        }
    }
    return 0;
}

int oddCheck(int *a, int size){
    int i;
    for (i = 0; i < size; i++)
    {
        if(a[i] !=0 && a[i]%2 ==0){
            a[i] = a[i]/2;
        }
        else{
            return 1;
        }
    }
    return 0;
}
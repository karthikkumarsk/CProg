/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: karth
 *
 * Created on 14 March, 2021, 6:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);
void swap(int *a, int *b);

int main(int argc, char** argv) {
    int arr[100],no_of_ele;
    int i;
    //int a_size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the no. of elements in the array to be sorted: ");
    scanf("%d",&no_of_ele);
    printf("\nEnter the array elements: \n");
    for(i=0;i<=no_of_ele-1;i++) {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,no_of_ele-1);
    printf("The sorted array: \n");
    for(i=0;i<=no_of_ele-1;i++){
        printf("The element %d is %d\n",i,arr[i]);
    }

    return (0);
}

void quicksort(int a[], int low, int high){
    int pi;
    if(low<high){
        pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}

int partition(int a[], int low, int high){
    int pivot=a[high];
    int i=low-1,j;
    for(j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}

void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

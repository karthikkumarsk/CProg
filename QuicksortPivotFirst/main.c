/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: karth
 *
 * Created on 14 March, 2021, 6:51 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);

int main(int argc, char** argv) {
    int arr[100],i,no_of_ele;
    printf("Enter no. of elements to be sorted in the array: ");
    scanf("%d",&no_of_ele);
    printf("\nEnter the array elements: \n");
    for(i=0;i<=no_of_ele-1;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,no_of_ele-1);
    printf("The sorted elements of the array: \n");
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

int parttition(int a[], int low, int high){
    int pivot=a[low],i=low+1,j;
    for(j=low+1;j<=high;j++){
        if(a[j]<pivot){
            swap(&a[i],&a[j]);
            i+=1;           
        }
    }
    swap(&a[low],&a[i-1]);
    return(i-1);
}

void swap(int *a, int * b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

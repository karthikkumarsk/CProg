/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: karth
 *
 * Created on 18 March, 2021, 4:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char str[20], c;
    int i=0,j;
    j=strlen(str);
    printf("Enter the string: ");
    scanf("%s",str);
    while(i<=j){
        c=str[i];
        str[i]=str[j];
        str[j]=c;
        i++;
        j--;
    }
    printf("The reverse string: %s\n",str);

    return (0);
}


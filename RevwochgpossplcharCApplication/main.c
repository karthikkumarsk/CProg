/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: karth
 *
 * Created on 6 July, 2020, 7:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char str[20],c;
    int len,i=0,j;
    printf("\nEnter the string: ");
    scanf("%s",str);
    len=strlen(str);
    j=len-1;
    while(i<=j)
    {
        if(!isalpha(str[i]))
            i++;
        else if(!isalpha(str[j]))
            j--;
        else
        {
            c=str[i];
            str[i]=str[j];
            str[j]=c;
            i++;
            j--;
        }
    }
    printf("\nThe reverse string: %s\n",str);
    return (EXIT_SUCCESS);
}


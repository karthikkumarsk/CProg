/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: karth
 *
 * Created on 18 March, 2021, 2:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

void push(void);
int pop(void);
void display(void);

/*
 * 
 */

struct stack{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;
STACK s;

int main(int argc, char** argv) {
    int choice;
    int option=1;
    s.top=-1;
    printf("Stack Operation\n");
    printf("----------------------\n");
    printf("1: push\n");
    printf("2: Pop\n");
    printf("3: display\n");
    printf("----------------------\n");
    while(option) {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
        fflush(stdin);
        printf("Do you want to continue (0 or 1)?");
        scanf("%d",&option);
        printf("\n");
    }    
    return (0);
}

void push(){
    int num;
    if(s.top==MAXSIZE-1){
        printf("Stack is full\n");
    }
    else{
        printf("Enter the stack element: ");
        scanf("%d",&num);
        printf("\n");
        s.top=s.top+1;
        s.stk[s.top]=num;
    }
}

int pop(){
    int num;
    if(s.top==-1){
        printf("Stack is empty\n");
    }
    else{
        num=s.stk[s.top];
        printf("The popped element is %d\n", num);
        s.top=s.top-1;
    }
    return (num);
}

void display(){
   int i;
   if (s.top==-1){
       printf("Stack is empty\n");
   }
   else{
       for(i=s.top;i>=0;i--){
           printf("The element of stk[%d] is %d\n",i,s.stk[i]);
       }
   }
}
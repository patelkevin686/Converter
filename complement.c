#include "logic.h"

#define MAX 8

//1'S COMPLEMENT
void func_1s_comp(int a[], int result[]){
    func_not(a,result);
}

//2'S COMPLEMENT
void func_2s_comp(int a[], int result[]){
    int carry = 1; //My starting "+1"
    int first_complement[MAX]; //My main list which will go through "func_1s_comp"

    func_1s_comp(a,first_complement);

    for(int i = MAX - 1; i >= 0; i--){

        if(first_complement[i]==1 && carry==1){ //Binary sum of 1+1 is 0, with a carry of 1
            result[i] = 0;
        }


        else if(first_complement[i]==0 && carry==1){ //As soon as there is a 0, the carry goes away
            result[i] = 1;
            carry = 0;
        }


        else{
            result[i] = first_complement[i]; //Copy everything from "first_complement" to "result" WHEN there is no more carry
        }

    }
}

//2'S COMPLEMENT STAR
void func_2s_comp_star(int a[], int result[]){
    int count = 0;

    for(int i = MAX - 1; i >= 0; i--){ //Starting from the right of the binary number to the left
        if(count==0){
            if(a[i]==0){
                result[i] = 0;
            }

            else if(a[i]==1){
                ++count; //As soon as there is a "1" in the binary number, "count" increments by 1
                result[i] = 1;
            }
        }

        else if(count==1){ //After the first "1" has been identified in the list from right to left, apply NOT to the remaining bits
                           //after the initial "1"

            if(a[i]==0){
                result[i] = 1;
            }

            else if(a[i]==1){
                result[i] = 0;
            }
        }

    }
}


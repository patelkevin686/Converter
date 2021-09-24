#include <stdio.h>

//All my header files
#include "user_input_binary_numbers.h"
#include "logic.h"
#include "complement.h"
#include "conversion.h"


#define MAX 8

void conversion_Prompt(int convert, int arr[]){
    while(1){
        printf("Enter your mode of conversion:\n");
        printf("1) Binary\n2) Octal\n3) Decimal\n4) Hexadecimal\n");

        while(scanf("%d",&convert)==0){
            printf("Please enter a number between 1 and 4 (inclusive): ");
            while(getchar()!='\n');
        }
        if(convert==1){
            to_binary(arr);
            return;

        }

        else if(convert==2){
            to_octal(arr);
            return;

        }

        else if(convert==3){
            to_decimal(arr);
            return;

        }

        else if(convert==4){
            to_hexadecimal(arr);
            return;

        }

        else{
            printf("You have not entered a number between 1 and 4 (inclusive)\n\n");
        }

    }
}

int convert; //GLOBAL VARIABLE FOR MY "conversion" FUNCTION

int main()
{
    while(1){
        int commandNumber;

        int arr1[MAX];
        int arr2[MAX];
        int targetArr[MAX];

        //USER PROMPT
        printf("Enter the command number:\n");
        printf("0) Exit\n1) AND\n2) OR\n3) NOT\n4) 1's complement\n5) 2's complement\n6) 2's complement*\n");

        while(scanf("%d",&commandNumber)==0){ //If user enters a character instead of a number
            printf("Please enter a valid number between 0 and 6 inclusive: ");
            while(getchar()!='\n');
        }

        //EXIT
        if(commandNumber==0){
            break;
        }

         //"AND" ; "OR"
        else if(commandNumber==1 || commandNumber==2){

            //AND
            if(commandNumber==1){
                first_Binary(arr1);
                puts("");
                second_Binary(arr2);

                func_and(arr1,arr2,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");
            }


            //OR
            else if(commandNumber==2){
                first_Binary(arr1);
                puts("");
                second_Binary(arr2);

                func_or(arr1,arr2,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");
            }

        }

        //"NOT" ; "1'S COMPLEMENT" ; "2'S COMPLEMENT" ; "2'S COMPLEMENT STAR"
        else if(commandNumber==3 || commandNumber==4 || commandNumber==5 || commandNumber==6){

             //NOT
            if(commandNumber==3){
                first_Binary(arr1);
                puts("");

                func_not(arr1,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");
            }


            //1'S COMPLEMENT
            else if(commandNumber==4){
                first_Binary(arr1);
                puts("");

                func_1s_comp(arr1,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");
            }


            //2'S COMPLEMENT
            else if(commandNumber==5){
                first_Binary(arr1);
                puts("");

                func_2s_comp(arr1,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");

            }


            //2'S COMPLEMENT STAR
            else if(commandNumber==6){
                first_Binary(arr1);
                puts("");

                func_2s_comp_star(arr1,targetArr);
                puts("");

                conversion_Prompt(convert , targetArr);

                puts("\n");
            }

        }

        else{
            printf("You have not entered a valid number between 0 and 2 inclusive.\n\n");
        }

    }

    printf("\nGoodbye!\n");


    return 0;
}

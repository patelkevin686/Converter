#include <math.h>

#define MAX 8

void to_binary(int a[]){
    printf("BASE 2: ");
    for(int i = 0; i < MAX; i++){
        printf("%d",a[i]);
    }

}

void to_octal(int a[]){
    int octal[3]; //the list which will be printed out

    int count = 0 , binary_pos = 0 , sum = 0;  //"count" is for counting the number of positions that has passed
                                               //"binary_pos" is the positions in the binary number to be added by separating the binary number
                                               //"sum" is the sum of each separated binary number

    for(int i = MAX - 1 ; i >= 0 ; i--){ //Starting from the right-most side to the left
        if(count==3){
            binary_pos = 0;
        }

        else if(count==6){
            binary_pos = 0;
        }

        sum += a[i] * pow(2,binary_pos);

        if(count==2){
            octal[2] = sum;
            sum = 0;
        }
        else if(count==5){
            octal[1] = sum;
            sum = 0;
        }

        else if(count==7){
            octal[0] = sum;
        }

        ++count;
        ++binary_pos;
    }

    printf("BASE 8: ");
    for(int x = 0 ; x <= 2 ; x++){
        printf("%o",octal[x]);
    }


}

void to_decimal(int a[]){
    int sum = 0;
    int binary_pos = MAX - 1;

    for(int i = 0; i < MAX; i++){
        sum += (a[i]) * (pow(2,binary_pos));
        --binary_pos;
    }

    printf("BASE 10: %d\n\n",sum);

}

void to_hexadecimal(int a[]){
    int hex[2];

    int count = 0 , binary_pos = 0 , sum = 0; //"count" is for counting the number of positions that has passed
                                               //"binary_pos" is the positions in the binary number to be added by separating the binary number
                                               //"sum" is the sum of each separated binary number

    for(int i = MAX - 1 ; i >= 0 ; i--){
        if(count==4){
            binary_pos = 0;
        }

        sum += a[i] * pow(2,binary_pos);

        if(count==3){
            hex[1] = sum;
            sum = 0;
        }

        else if(count==7){
            hex[0] = sum;
        }

        ++count;
        ++binary_pos;
    }

    printf("BASE 16 (lowercase): ");
    for(int x = 0 ; x <= 1 ; x++){
        printf("%x",hex[x]);
    }



    printf("BASE 16 (uppercase): ");
    for(int x = 0 ; x <= 1 ; x++){
        printf("%X",hex[x]);
    }

}

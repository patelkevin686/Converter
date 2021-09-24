#define MAX 8

//FOR THE FIRST BINARY NUMBER ENTERED BY USER
void first_Binary(int arr[]){
    printf("Enter your first binary number (8 bits): \n");
    for(int i = 0; i < MAX; i++){
        while(scanf("%d",&arr[i])==0){ //If user enters a character
            printf("Please enter either 0 or 1: ");
            while(getchar()!='\n');
        }

        while(!(arr[i]==0 || arr[i]==1)){ //If user does not enter 0 or 1
            printf("Enter boolean value (0 or 1): ");

            while(scanf("%d",&arr[i])==0){ //If user enters a character instead of a number
                printf("Please enter either 0 or 1: ");
                while(getchar()!='\n');
            }
        }
    }

}

//FOR THE SECOND BINARY NUMBER ENTERED BY USER
void second_Binary(int arr[]){
    printf("Enter your second binary number (8 bits): \n");
    for(int i = 0; i < MAX; i++){
        while(scanf("%d",&arr[i])==0){ //If user enters a character
            printf("Please enter either 0 or 1: ");
            while(getchar()!='\n');
        }

        while(!(arr[i]==0 || arr[i]==1)){ //If user does not enter 0 or 1
            printf("Enter boolean value (0 or 1): ");

            while(scanf("%d",&arr[i])==0){ //If user enters a character instead of a number
                printf("Please enter either 0 or 1: ");
                while(getchar()!='\n');
            }
        }
    }

}

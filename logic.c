#define MAX 8

//AND
void func_and(int a[], int b[], int result[]){
    for(int i = 0; i < MAX; i++){
        result[i] = a[i] & b[i];
    }
}

//OR
void func_or(int a[], int b[], int result[]){
    for(int i = 0; i < MAX; i++){
        result[i] = a[i] | b[i];
    }
}

//NOT
void func_not(int a[], int result[]){ //Just reverse the order (0 becomes 1 ; 1 becomes 0)
    for(int i = 0; i < MAX; i++){
        if(a[i]==0){
            result[i] = 1;
        }

        else if(a[i]==1){
            result[i] = 0;
        }
    }
}

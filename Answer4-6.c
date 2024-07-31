#include<stdio.h>

void main(){

int A1[2][2]={
     {10,20},
     {30,40},
};
int A2[2][2]={
     {20,50},
     {10,80},
};
int b[2][2];
//Addition
printf("matrix Addition\n");
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        b[i][E]=0;
        b[i][E]=A1[i][E]+A2[i][E];//Addition
        }
}
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        printf("%d",b[i][E]);
    }
    printf("\n");
}
//subtraction
     printf("\n");
     printf("matrix subtraction\n");
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        b[i][E]=0;
        b[i][E]=A1[i][E]-A2[i][E];//subtraction
        }
}
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        printf("%d",b[i][E]);
    }
    printf("\n");
}
//multiplication
     printf("\n");
     printf("matrix multiplication\n");
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        b[i][E]=0;
        b[i][E]=A1[i][E]*A2[i][E];//multiplication
        }
}
for(int i=0;i<2;i++){
    for(int E=0;E<2;E++){
        printf("%d",b[i][E]);
    }
    printf("\n");
}
}


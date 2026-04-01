#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    // printf("%d",a[0]);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    //while loop
    printf("\nUsing while loop\n");
    int i=0;
    while(i<5){
        printf("%d",a[i]);
        i++;
    }
    printf("\nDO while loop\n");
    int j=0;
    do{
        printf("%d",a[j]);
        j++;
    }while(j<5);
}
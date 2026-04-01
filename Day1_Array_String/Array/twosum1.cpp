#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* data=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                data[0]=i;//4 byte
                data[1]=j;//4 byte
                return data;
            }
        }
    }
    return NULL;

}

int main(){
    int a[]={2,7,11,15};
    int size=4;
    int target=9;
    int* data2=twoSum(a,size,target);
    if(data2!=NULL){
        printf("Index %d %d\n", data2[0],data2[1]);
    }else{printf("Target is Not matched");}
}
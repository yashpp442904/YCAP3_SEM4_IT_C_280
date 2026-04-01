#include<stdio.h>
int twosum(int nums[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                return {(i,j)};
            }
        }
    }
}
int main(){
    int nums[]={2,7,11,15};
    int target=9;
    int size=4;
    printf("%d %d",twosum(nums,size,target));
}
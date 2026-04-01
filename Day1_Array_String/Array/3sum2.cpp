#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
      vector<vector<int>> final_result;
      int twosum(vector<int> &sum,int target,int i,int j){
            while(i<j){
                if(nums[i]+nums[j]>target){
                 j--;
                }else if(nums[i]+nums[j]<target){
                    i++;
                }else{
                    //remove duplicate
                    while(nums[i]==nums[i+1]) i++;
                    while(nums[j]==nums[j-1]) j--;
                    final_result.push_back({-target,nums[i],nums[j]});
                    i++;
                    j--;
                }
            }
      }




    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     //condition n1+n2+n3==0
     if(n<3){return{};}
     sort(begin(nums),end(nums));
     //fix the n1
     for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){continue;}
        int n1=nums[i];
        int target=-n1;
        twosum(nums,target,i=1,n-1);//find n2 and n3
     }return final_result;

    }
};
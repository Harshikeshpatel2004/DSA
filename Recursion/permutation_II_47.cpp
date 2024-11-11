# include<iostream>
using namespace std;
#include<vector>

    void permute(vector<int>&arr,vector<vector<int>>&ans,int index){

        if(index==arr.size()){
            ans.push_back(arr);
            return;
        }
        vector<bool>use(21,0);

        for(int i=index;i<arr.size();i++){
            if(use[arr[i]+10]==0){
                swap(arr[i],arr[index]);
                permute(arr,ans,index+1);
                swap(arr[i],arr[index]);
                use[arr[i]+10]=1;

            }
        }
    }
    int main(){

        vector<int>nums={1,1,2};
        vector<vector<int>>ans;
        permute(nums,ans,0);

        for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    }
 
        
    
    

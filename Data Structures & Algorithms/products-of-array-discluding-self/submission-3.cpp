class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n=nums.size();
        vector<int>v(n);
        int p=1,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                p=p*nums[i];
            }
            else{
                count+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(count>1){
                v[i]=0;
            }
            else if(count==1){
                if(nums[i]==0){
                    v[i]=p;
                }
                else{
                    v[i]=0;
                }
            }
            else{
                v[i]=p/nums[i];
            }
        }
        return v;
    }
};

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> res;
//         if(k==1)return nums;
//         if(k==nums.size()){
//             res.push_back(*max_element(nums.begin(),nums.end()));
//             return res;
//         }
//         deque<int> dq;
//         int index,max;
//         for(int i=0;i<k;i++){
//             dq.push_back(nums[i]);
//         }
//         auto m = max_element(nums.begin(),nums.begin()+k);
//         res.push_back(*m);
//         max=*m;
//         index=m-nums.begin();
//         for(int i=k;i<nums.size();i++){
//             dq.pop_front();
//             dq.push_back(nums[i]);
//             if(max>nums[i]&&index!=0){
//                 res.push_back(max);
//                 index--;
//             }
//             else{
//                 max=nums[i];
//                 index=i;
//                 res.push_back(max); 
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        if(k==1)return nums;
        if(k==nums.size()){
            res.push_back(*max_element(nums.begin(),nums.end()));
            return res;
        }
       int max=INT_MAX,index=-1;
        for(int i=0;i+k-1<nums.size();i++){
            if(nums[i+k-1]>max){
                max=nums[i+k-1];
                index=i+k-1;
            }else if(i>index){
                auto it = max_element(nums.begin()+i,nums.begin()+i+k);
                index = it-nums.begin();
                max=*it;
            }
            res.push_back(max);
        }
        return res;
    }
};
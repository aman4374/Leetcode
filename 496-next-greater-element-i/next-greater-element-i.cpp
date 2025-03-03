class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

       unordered_map<int,int> nextGreater;
       stack<int> s;

       for(int num:nums2) {
        while(!s.empty() && s.top()<num){
            nextGreater[s.top()] = num;
            s.pop();
        }
        s.push(num);
       }

       while(!s.empty()){
        nextGreater[s.top()] = -1;
        s.pop();
       }

       vector<int> res;
       for(int num:nums1){
        res.push_back(nextGreater[num]);
       }
        return res;
    }
};
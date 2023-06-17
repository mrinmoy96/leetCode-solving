#include<unordered_map>
#include<algorithm>
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string ,int>mp;
        vector<string>ans;
        for(int i=0; i<list1.size(); i++){
            if(mp.find(list1[i])==mp.end()){
                mp.insert({list1[i], i});
            }
        }
        int res=INT_MAX;
        for(int i=0; i<list2.size();i++ ){
            if(mp.find(list2[i])!=mp.end()){
                if(mp[list2[i]]+i<res){
                    res=mp[list2[i]]+i;
                }
            }
        }
        for(int i=0; i<list2.size(); i++){
            if(mp.find(list2[i])!=mp.end() && mp[list2[i]]+i==res){
                ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};
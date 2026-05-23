class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int> mp1,mp2;
        for(auto it :s){
            mp1[it]++;
        }
        for(auto it :t){
            mp2[it]++;
        }
        
        for(auto it : mp1){
        if(it.second != mp2[it.first]) return false;
    }
        return true;
        

        
        
    }
};

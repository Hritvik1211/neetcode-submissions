class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<s.length();i++){
             mp1[s[i]-'a']++;
             mp2[t[i]-'a']++;

        }
        if(mp1==mp2){
            return true;
        }
        else return false;

    }
};

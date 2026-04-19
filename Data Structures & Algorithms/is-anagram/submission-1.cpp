class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
            // sort(s.begin(),s.end());
            // sort(t.begin(),t.end());
            // return s == t; // yeo bhujnu // intutuion

            unordered_map<char,int>counts;
            unordered_map<char,int>countt;

            for(int i=0;i<s.size();i++){
                counts[s[i]]++;
                countt[t[i]]++;
            }
            return counts == countt;
    }
};

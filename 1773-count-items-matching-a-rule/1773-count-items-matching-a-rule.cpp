class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        return count_if(items.begin(),items.end(),[&](const auto& x){return x[ruleKey=="type"?0:ruleKey=="color"?1:2]==ruleValue;});
    }
};
class Solution {
private:
    vector<vector<int> > ret;
    vector<int> sub;
    void dfs(int start, vector<int> &S) {
        ret.push_back(sub);
        for (int i = start ; i < S.size() ; i ++) {
            sub.push_back(S[i]);
            dfs(i + 1, S);
            sub.pop_back();
        }
    }
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin() , S.end());
        ret.clear();
        dfs(0 , S);
        return ret;
    }
};
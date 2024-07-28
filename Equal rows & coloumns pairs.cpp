class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n=grid[0].size();

        vector<vector<int>>v1;
        vector<vector<int>>v2;


        //row pushed
        for (int i = 0; i < n; i++) {
            v1.push_back(grid[i]);
        }

        //coloumn pushed
        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }
            v2.push_back(col);
        }


        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());


        int v = 0;
         for (const auto& row : v1) {
            for (const auto& col : v2) {
                if (row == col) {
                    v++;
                }
            }
        }
        return v;
    }
};

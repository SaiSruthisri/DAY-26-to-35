
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n =matrix.size();
       int s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(i==j)s=1;
                if(s==1)
                {
                  swap(matrix[i][j],matrix[j][i]);
                }
        }
        s=0;

        }


        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

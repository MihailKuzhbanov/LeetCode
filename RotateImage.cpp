//task 48
//0ms 8.9mb

class Solution {
public:
void rotate(vector<vector<int>>& matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);
        for (auto& el: matrix) reverse(el.begin(), el.end());
    }
};

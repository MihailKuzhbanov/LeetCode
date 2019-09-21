//task 85
//24ms 10.3mb

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix)
    {
        if (matrix.empty()) return 0;
        int result = 0;
        int sizeY = matrix.size();
        int sizeX = matrix[0].size();
        vector<int> line(sizeX, 0);

        for (int i = 0; i < sizeY; i++)
        {
            for (int j = 0; j < sizeX; j++)
            {
                (matrix[i][j] == '1') ? line[j]++ : line[j] = 0;
                int temp = line[j];
                for (int k = j; k >= 0; k--)
                {
                    if (line[k] == 0) break;
                    else if (line[k] < temp) temp = line[k];
                    result = max(result, temp * (j - k + 1));
                }
            }
        }
        return result;
    }
};

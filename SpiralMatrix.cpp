//task 54
//0ms 8.6mb

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> result;

        if (matrix.empty()) return result;
        if (matrix.size() == 1) return matrix[0];
        if (matrix[0].size() == 1)
        {
            for (auto el : matrix) result.push_back(el[0]);
            return result;
        }

        int left(0), right(matrix[0].size() - 1), up(0), down(matrix.size() - 1);

        while (left < right && up < down)
        {
            for (int i = left; i <= right; i++) result.push_back(matrix[up][i]);
            up++;
            for (int i = up; i <= down; i++) result.push_back(matrix[i][right]);
            right--;
            for (int i = right; i >= left; i--) result.push_back(matrix[down][i]);
            down--;
            for (int i = down; i >= up; i--) result.push_back(matrix[i][left]);
            left++;
        }

        if (matrix.size() == matrix[0].size() && matrix[0].size() % 2 == 1 && matrix.size() % 2 == 1)
            result.push_back(matrix[matrix[0].size() / 2][matrix.size() / 2]);

        if (matrix[0].size() % 2 == 1 && down - up >= 1)
        {
            while(up != down)
            {
                result.push_back(matrix[up][matrix[0].size() / 2]);
                up++;
            }
            result.push_back(matrix[down][matrix[0].size() / 2]);
        }

        if (matrix.size() % 2 == 1 && right - left >= 1)
        {
            while(left != right)
            {
                result.push_back(matrix[matrix.size() / 2][left]);
                left++;
            }
            result.push_back(matrix[matrix.size() / 2][right]);
        }

        return result;
    }
};

#include <iostream>
#include <vector>
using namespace std;
pair<int, int> SearchOnMatrix(int matrix[][3], int row, int col, int target)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (target == matrix[i][j])
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{

    int matrix[4][3] = {{1, 2, 3}, {1, 2, 3}};
    pair<int, int> ans = SearchOnMatrix(matrix, 2, 3, 3);
    vector<vector<int>> vecMatrix = {{1, 2, 3}, {1, 2, 3}};

    cout << vecMatrix[0].size();
    return 0;
}
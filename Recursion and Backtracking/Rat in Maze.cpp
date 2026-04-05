#include <iostream>
#include <vector>
using namespace std;

void solve(int row, int col, vector<vector<int>> &maze,
           vector<vector<bool>> &mazefre, vector<char> &ans,
           vector<vector<char>> &ans_store) {

  if (row < 0 || col < 0 || row > maze.size() - 1 || col > maze.size() - 1 ||
      maze[row][col] == 0 || mazefre[row][col] == true) {
    return;
  }

  if (row == maze.size() - 1 && col == maze.size() - 1) {

    ans_store.push_back(ans);
    return;
  }

  mazefre[row][col] = true;

  // left
  ans.push_back('l');
  solve(row, col - 1, maze, mazefre, ans, ans_store);
  ans.pop_back();
  // top
  ans.push_back('t');
  solve(row - 1, col, maze, mazefre, ans, ans_store);
  ans.pop_back();
  // right

  ans.push_back('r');
  solve(row, col + 1, maze, mazefre, ans, ans_store);
  ans.pop_back();
  // bottom
  ans.push_back('b');
  solve(row + 1, col, maze, mazefre, ans, ans_store);
  ans.pop_back();

  mazefre[row][col] = false;
}

int main() {

  vector<vector<int>> maze = {
      {1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

  vector<vector<bool>> mazefre(4, vector<bool>(4, false));
  vector<char> ans;
  vector<vector<char>> ans_store;
  solve(0, 0, maze, mazefre, ans, ans_store);

  for (int i = 0; i < ans_store.size(); i++) {

    for (int j = 0; j < ans_store[i].size(); j++) {
      cout << ans_store[i][j];
    }
    cout << "\n";
  }

  return 0;
}

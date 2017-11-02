#include <iostream>

using namespace std;

int pathCount(int grid[][4], int i, int j) {
  if(grid[i][j] != 0) {
    return grid[i][j];
  } else {
    int pathValue = pathCount(grid, i - 1, j) + pathCount(grid, i, j - 1);
    grid[i][j] = pathValue;
    return pathValue;
  }
}


void printGrid(int grid[][4]) {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

int main(int argc, char const *argv[]) {
  int grid[][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  };
  int n = 4;
  for(int i = 0; i < n; i++) {
    grid[i][0] = 1;
    grid[0][i] = 1;
  }
  printGrid(grid);
  cout << pathCount(grid, 1, 1) << endl;
  printGrid(grid);
  cout << pathCount(grid, 2, 2) << endl;
  printGrid(grid);
  cout << pathCount(grid, 3, 2) << endl;
  printGrid(grid);
  return 0;
}
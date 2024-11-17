#include <iostream>
#include <vector>
using namespace std;

void modifyMatrix(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    vector<int> row(m, 0), col(n, 0);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] == 1) row[i] = col[j] = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (row[i] == 1 || col[j] == 1) mat[i][j] = 1;
}

int main() {
    vector<vector<int>> mat1 = {{1, 0}, {0, 0}};
    modifyMatrix(mat1);
    for (auto row : mat1) { for (auto val : row) cout << val << " "; cout << endl; }

    vector<vector<int>> mat2 = {{0, 0, 0}, {0, 0, 1}};
    modifyMatrix(mat2);
    for (auto row : mat2) { for (auto val : row) cout << val << " "; cout << endl; }

    vector<vector<int>> mat3 = {{1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
    modifyMatrix(mat3);
    for (auto row : mat3) { for (auto val : row) cout << val << " "; cout << endl; }

    return 0;
}

#include <iostream>;
#include <string>;
#include <vector>;

using namespace std;

void rotate(vector<vector<int>>& matrix) {

	int holder = 0;
	int L = 0;
	int R = (matrix.size() - 1);
	int shrink = matrix.size();
	int grow = 0;
	for (int i = 0; i < shrink; i++) {
		for (int j = grow; j < matrix.size(); j++) {
			holder = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = holder;

		}
		grow++;
	}
	
	while (L <= R) {
	
		for (int j = 0; j < matrix.size(); j++) {
			holder = matrix[j][L];
			matrix[j][L] = matrix[j][R];
			matrix[j][R] = holder;

		}


		L++;
		R--;

	}
}

int main() {

	vector<vector<int>> inMatrix = { {1,2,3}, {4,5,6}, {7,8,9} };

	rotate(inMatrix);

	for (int i = 0; i < inMatrix.size(); i++) {
		for (int j = 0; j < inMatrix.size(); j++) {
			cout << inMatrix[i][j];

		}
		cout << endl;
	}

	return 0;
}
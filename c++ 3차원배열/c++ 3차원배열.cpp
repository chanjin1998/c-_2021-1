#include <iostream>
#include <cstdlib>
using namespace std;

int*** makeArray3d(int* sz);
void destroyArray3d(int*** arr, int* sz);

int main(int argc, char* argv[])
{
	if (argc < 3) {
		cout << "usage : ./str 1d 2d 3d ... nd" << endl;
		return -1;
	}
	
	int i, dim = argc - 1; // i, dim = 3
	int* size = new int[dim]; //dim = 3;

	for (i = 1; i < argc; i++)
		size[i - 1] = atoi(argv[i]);
	
	int ***arr3d = NULL;
	arr3d = makeArray3d(size);
	for (int i = 0; i < size[0]; i++)
		for (int j = 0; j < size[1]; j++)
			for (int k = 0; size[2]; k++)
				arr3d[i][j][k] = i * size[1] + j + k;
	for (int i = 0; i < size[0]; i++) {
		for (int j = 0; j < size[1]; j++) {
			for (int k = 0; size[2]; k++) {
				cout << arr3d[i][j][k] << " ";
			}
			cout << endl;
		}
	}
	destroyArray3d(arr3d, size);
	return 0;

}

int*** makeArray3d(int* sz)
{
	int n1 = sz[0];
	int n2 = sz[1];
	int n3 = sz[2];
	int*** arr = new int** [n1];
	for (int i = 0; i < n1; i++) {
		int** arr1 = new int* [n2]; // 234
		for (int j = 0; j < n2; j++)
			arr1[j] = new int[n3];
	}
}


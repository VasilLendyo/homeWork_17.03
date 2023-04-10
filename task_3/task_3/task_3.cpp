#include <iostream>
using namespace std;

int main(){
	const int N = 10;
	int arr[N];

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] == arr[j]) {
				cout << arr[i] << endl;
				break;
			}
		}
	}
}

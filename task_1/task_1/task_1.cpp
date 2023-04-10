#include <iostream>
using namespace std;

int main() {
	int const ENTRANCES_COUNT = 4;
	int const FLOORS_COUNT = 5;
	int const FLATS_PER_FLOOR = 2;

	int residents[ENTRANCES_COUNT][FLOORS_COUNT][FLATS_PER_FLOOR];


	srand(time(NULL));
	for (int i = 0; i < ENTRANCES_COUNT; i++) {
		for (int j = 0; j < FLOORS_COUNT; j++) {
			for (int k = 0; k < FLATS_PER_FLOOR; k++) {
				residents[i][j][k] = rand() % 8;
			}
		}
	}


	//a
	int flatNumber;
	cout << "Enter the flat: ";
	cin >> flatNumber;

	int entrance = ((flatNumber - 1) / 10);
	int floor = (((flatNumber - 1) % 10) / 2);

	int residentCount = residents[entrance][floor][flatNumber % 2];
	int neighborResidentCount = residents[entrance][floor][(flatNumber + 1) % 2];

	cout << "Resident in flat " << flatNumber << ": " << residentCount << endl;
	cout << "Neighbors resident count: " << neighborResidentCount << endl;



	//б
	int residentPerEntrance[ENTRANCES_COUNT] = { 0 };

	for (int i = 0; i < ENTRANCES_COUNT; i++) {
		for (int j = 0; j < FLOORS_COUNT; j++) {
			for (int k = 0; k < FLATS_PER_FLOOR; k++) {
				residentPerEntrance[i] += residents[i][j][k];
			}
		}
	}

	for (int i = 0; i < ENTRANCES_COUNT; i++) {
		cout << "Resident in entrance " << i + 1 << ": " << residentPerEntrance[i] << endl;
	}
	

	//в
	int multiChildFamilies[40];
	int numMultiChildFamilies = 0;

	for (int i = 0; i < ENTRANCES_COUNT; i++) {
		for (int j = 0; j < FLOORS_COUNT; j++) {
			for (int k = 0; k < FLATS_PER_FLOOR; k++) {
				int residentsCount = residents[i][j][k];
				if (residentsCount > 5) {
					int flatNumber = (i*10) + (j*2) + (k+1);
					multiChildFamilies[numMultiChildFamilies] = flatNumber;
					numMultiChildFamilies++;
				}
			}
		}
	}

	cout << "Multi-child families live in flats: ";
	for (int i = 0; i < numMultiChildFamilies; i++) {
		cout << multiChildFamilies[i] << " ";
	}
}
